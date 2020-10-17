def readmo():
    filepath = tkFileDialog.askopenfilename()
    tkMessageBox.showinfo("File loaded", "The modelica file has been loaded.")
    Content = []
    with open(filepath,"r+") as input_file:
    	for line in input_file:
    		Content.append(line)
    input_file.close()
    for ii in range(0,len(Content),1):
        test_connect = Content[ii].find("equation")
        if test_connect == 0:
            index_eq = ii
    out_file = open("Teste.txt","w+") 
    out_file.write("\n Connection starts at line %f \n\n" % (float(index_eq)))