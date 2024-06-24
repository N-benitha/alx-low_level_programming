#!/bin/bash
gcc TEST/*.c -c -fPIC
gcc -shared -o liball.so.x.y -Wl,-soname,liball.so.x TEST/*.o
ln -s liball.so.x.y liball.so.x
ln -s liball.so.x liball.so
