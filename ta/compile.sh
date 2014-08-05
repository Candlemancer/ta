#!/bin/bash
./clean.sh
clear && clear
#g++ -std=c++0x -o ta topological-apt.cpp -lapt-pkg
g++ -std=c++0x -Wall -g -c topological-apt.cpp #-lapt-pkg
g++ -std=c++0x -Wall -g -o ta topological-apt.o -lapt-pkg
