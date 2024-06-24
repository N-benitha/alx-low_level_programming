#!/bin/bash
gcc TEST/*.c -c -fPIC
gcc -shared -o liball.so -Wl,-soname,liball.so *.o
