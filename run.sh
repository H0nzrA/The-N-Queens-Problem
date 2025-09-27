#!/usr/bin/env bash

mkdir -p bin
gcc -g -Wall -Wextra -Werror $(find . -type f -name "*.c") -o bin/the_n_queen_problem.out
./bin/the_n_queen_problem.out $1