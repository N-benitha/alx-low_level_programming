#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC abs.c isdigit.c memset.c strcat.c strcpy.c strncpy.c strstr.c atoi.c islower.c _putchar.c strchr.c strlen.c strpbrk.c isalpha.c isupper.c memcpy.c puts.c strcmp.c strncat.c strspn.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
