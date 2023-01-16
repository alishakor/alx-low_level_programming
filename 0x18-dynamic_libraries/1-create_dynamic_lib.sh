#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
