import logging
import re
import os
import pandas as pd
import yaml

from _pydecimal import Decimal, ROUND_DOWN
from collections import defaultdict
logger = logging.getLogger(__name__)


def to_number(s):
    """
    Convert a string to a number. If unsuccessful, return the de-blanked string.
    """
    ret = s

    # remove single quotes
    if "'" in ret:
        ret = ret.strip("'").strip()

    # try converting to booleans / None
    if ret == 'True':
        return True
    elif ret == 'False':
        return False
    elif ret == 'None':
        return None

    # try converting to float or int
    try:
        ret = int(ret)
    except ValueError:
        try:
            ret = float(ret)
        except ValueError:
            try:
                ret = str(ret)
            except ValueError:
                pass

    return ret


def parse_dyr(file):
    """
    Parse dyr file into a dict where keys are model names and values are dataframes.
    """
    with open(file, 'r') as f:
        input_list = [line.strip() for line in f]

    # concatenate multi-line device data
    input_concat_dict = defaultdict(list)
    multi_line = list()
    for i, line in enumerate(input_list):
        if line == '':
            continue
        if '/' not in line:
            multi_line.append(line)
        else:
            multi_line.append(line.split('/')[0])
            single_line = ' '.join(multi_line)

            if single_line.strip() == '':
                continue

            single_list = single_line.split("'")

            list_length = len(single_list)
            
            psse_model = single_list[1].strip()
            # this code was added in order to be able to process different ways of declaring DYR data:
            if list_length == 5:
                input_concat_dict[psse_model].append(single_list[0] + single_list[3] + single_list[4])
            elif list_length == 7:
                input_concat_dict[psse_model].append(single_list[0] + single_list[3] + single_list[4] + single_list[5] + single_list[6])
            else:
                input_concat_dict[psse_model].append(single_list[0] + single_list[2])
                
            multi_line = list()

    # construct pandas dataframe for all models
    dyr_dict = dict()   # input data from dyr file

    for psse_model, all_rows in input_concat_dict.items():
        dev_params_num = [([to_number(cell) for cell in row.split()]) for row in all_rows]
        dyr_dict[psse_model] = pd.DataFrame(dev_params_num)

    return dyr_dict
