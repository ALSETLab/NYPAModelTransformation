## Useful commands

# Copy from docker container
```
sudo docker cp nervous_panini:/home/manuelnvro/WorkingDir/ /home/manuelnvro/Desktop/TRIAL
```
Make sure that the host folder is read/writable

# Run csv compare
```
mono Compare.exe --mode csvTreeCompare --delimiter "," --reportdir "/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/Reports" --tolerance 1e-2 "/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/Docker" "/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/PSSE"
```
