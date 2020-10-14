FROM ubuntu:20.04

LABEL author="michal@owsiak.org"
LABEL description="Environment for running JNI Cookbook samples"

ENV TZ=Europe/Warsaw
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update
RUN apt-get install -y git
RUN apt-get install -y vim
RUN apt-get install -y make
RUN apt-get install -y tree
RUN apt-get install -y build-essential
RUN apt-get install -y gcc
RUN apt-get install -y gdb
RUN apt-get install -y openjdk-11-jdk openjdk-11-jdk-headless
RUN apt-get install -y scala
RUN apt-get install -y curl
RUN apt-get install -y libpthread-stubs0-dev

RUN mkdir -p /opt
COPY scripts/run.sh /opt/run.sh
RUN chmod +x /opt/run.sh

RUN useradd -ms /bin/bash jnicoder

USER jnicoder
WORKDIR /home/jnicoder

RUN echo 'export PS1="[\u@jnicookbook-docker:\w ] $ "' >> /home/jnicoder/.bashrc
RUN echo 'export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64' >> /home/jnicoder/.bashrc

RUN git clone https://github.com/mkowsiak/jnicookbook.git

CMD /opt/run.sh
