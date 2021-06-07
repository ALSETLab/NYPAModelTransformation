FROM phusion/baseimage:0.9.22
MAINTAINER Manuel Navarro Catalan "manosnavarro@gmail.com"

# Use baseimage-docker's init system.
CMD ["/sbin/my_init"]

ARG DEBIAN_FRONTEND=noninteractive
USER root

RUN add-apt-repository 'deb http://build.openmodelica.org/apt xenial stable'
RUN curl -s http://build.openmodelica.org/apt/openmodelica.asc | apt-key add - 

# Install python, omc
RUN apt-get update --fix-missing && apt-get upgrade -y -o Dpkg::Options::="--force-confold" && apt-get install -y \
	python \ 
    python-pip \
    python-dev \
    build-essential \
    python-numpy \
    omc \
    omlib-modelica-3.2.2
   
RUN pip install --upgrade pip

#Install python 3.7  
RUN apt install software-properties-common
RUN add-apt-repository ppa:deadsnakes/ppa
RUN apt update
RUN apt install python3.7 -y
RUN apt install python3-pip -y
RUN python3.7 -m pip install --upgrade pip

# Install OMPython
RUN python3.7 -m pip install -U https://github.com/OpenModelica/OMPython/archive/master.zip

# Install modelicares
RUN python3.7 -m pip install modelicares

# Installing right version of matplotlib
RUN python3.7 -m pip install matplotlib==3.0.0

# Install mono
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF
RUN apt install apt-transport-https ca-certificates
RUN echo "deb https://download.mono-project.com/repo/ubuntu stable-xenial main"
RUN tee /etc/apt/sources.list.d/mono-official-stable.list
RUN apt update
RUN apt install mono-devel -y

# Install Tzdata
RUN DEBIAN_FRONTEND="noninteractive" apt-get -y install tzdata

# Clean up APT when done.
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Add User
RUN useradd -m -s /bin/bash manuelnvro
RUN chown -R manuelnvro:manuelnvro /home/manuelnvro

COPY ./OpenIPSLVerification/VerificationRoutines/CI /home/manuelnvro/CI
COPY ./OpenIPSL /home/manuelnvro/OpenIPSL
COPY ./OpenIPSLVerification/VerificationRoutines/WorkingDir /home/manuelnvro/WorkingDir
COPY ./CSVVerification /home/manuelnvro/CSVVerification

# Change user permissions
RUN chmod -R ugo+rwx /home/manuelnvro

USER manuelnvro
ENV USER manuelnvro
WORKDIR /home/manuelnvro/CI/

#CMD [ "python", "./modelCheck.py" ]
