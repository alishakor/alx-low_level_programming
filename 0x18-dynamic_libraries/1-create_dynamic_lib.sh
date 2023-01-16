#!/bin/bas
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o

