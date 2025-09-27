#!/usr/bin/env bash

mkdir -p bin
cd bin
gcc -g -Wall -Wextra -Werror $(find .. -type f -name "*.c") -o the_n_queen_problem.out
./the_n_queen_problem.out $@