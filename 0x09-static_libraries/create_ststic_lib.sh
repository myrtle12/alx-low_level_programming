#!/bin/bash
gcc -c -well -werror -wextra *.c
ar -rc liball.a *.o
ranlib liball.a
