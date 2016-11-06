#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libholbertonschool.a *.o
