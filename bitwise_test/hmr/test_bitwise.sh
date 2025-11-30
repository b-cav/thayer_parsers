#!/bin/bash

make clean &> /dev/null
make &> /dev/null

echo "Testing on file <<1010 1010>>"
./bit correct.bit
echo $?

echo "Testing on file <<0000 0000>>"
./bit zero.bit
echo $?

echo "Testing on file <<1000 0000>>"
./bit one.bit
echo $?

echo "Testing on file <<1010 0000>>"
./bit half.bit
echo $?

echo "Testing on file <<0101 0101>>"
./bit opp.bit
echo $?
