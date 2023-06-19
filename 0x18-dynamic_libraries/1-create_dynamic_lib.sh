#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -fPIC *.o -o liball.so
