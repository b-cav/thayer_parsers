#!/bin/bash

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd "$@" > /dev/null
}

# Check arguments
if [ $# != 0 ]; then
		echo "usage: tv.sh"
		exit
fi

# Clean out and build vector library
pushd ../../utils/
make clean > /dev/null
make > /dev/null
popd

# Clean out and build library.
pushd ../../mavlink/utils/
make clean > /dev/null
make > /dev/null
popd

# Clean out directory and build executables
make clean > /dev/null
make > /dev/null

# Generate tests
./tv 0 1 1 > /dev/null

# Clean out library.
pushd ../../mavlink/utils/
make clean > /dev/null
popd

# Clean out vector library
pushd ../../utils/
make clean > /dev/null
popd

pushd ../tests/

# Move tests to tests directory
make clean > /dev/null

# Import tests from tests.src
cp -rf ../tests.src/pass.* ../tests.src/fail.* . &> /dev/null

popd
