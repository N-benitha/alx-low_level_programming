#!/bin/bash
gcc TEST/*.c -c -fPIC
gcc *.o -shared -o liball.so
