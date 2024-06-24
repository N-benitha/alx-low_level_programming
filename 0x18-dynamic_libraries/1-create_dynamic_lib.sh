#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC TEST/*.c
gcc -shared -o liball.so -Wl,-soname,liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
