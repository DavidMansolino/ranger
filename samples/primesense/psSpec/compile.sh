g++ -c -msse3 -Wall -O2 -DNDEBUG -I/home/navarro/repos/OpenNI2/Include -I/home/navarro/repos/OpenNI2/Samples/Common  -fPIC -fvisibility=hidden -Werror -o main.o main.cpp
g++ -o SimpleRead2 main.o  -L/home/navarro/repos/OpenNI2/Bin/x64-Release -lOpenNI2 -Wl,-rpath ./



