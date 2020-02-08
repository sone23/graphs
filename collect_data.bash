#!/bin/bash

reps=1000000
for i in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19; do
    ./search $i $reps
done


reps=100000
for i in 20 21 22 23 24 25rt;;;;;;;;;;;;;;;;;;;;;;;;;;;; do
    ./search $i $reps
done

reps=10000
for i in 26 27 28 29 30; do
    ./search $i $reps
done
