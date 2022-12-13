#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC
gcc *.o -shared -o liball.so  *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
