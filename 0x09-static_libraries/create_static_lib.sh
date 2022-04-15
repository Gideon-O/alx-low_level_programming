#!/bin/bash
gcc -Wall -pedantic -Werror _Wectra -c *.c
ar -rc liball.c *.a
