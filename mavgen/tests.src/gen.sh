#!/bin/bash

# Clean test gen directory
make clean > /dev/null
make &> /dev/null

# Run message generators
./gen_v1_HB > /dev/null
./gen_v2_HB > /dev/null

# Move everything to test directory
mv ./pass.* ./fail.* ../tests/ &> /dev/null

