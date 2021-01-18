@echo

:: Compiling the program for windows
g++ main.cpp start.cpp server.cpp client.cpp error.cpp -o chord

::Running the code for starting a network
chord -a 128.8.126.63 -p 4170 -ts 30000 -tff 10000 -tcp 30000 -r 4

::Running the code for joining the network
chord -a 128.8.126.63 -p 4171 -ja 128.8.126.63 -jp 4170 -ts 30000 -tff 10000 -tcp 30000 -r 4