#!/bin/bash

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd "$@" > /dev/null
}

pushd ./c/
shopt -s nullglob
for f in ../../tests/pass.*
do
    ../../../scripts/tester.sh pass "./daffodil parse -V daffodil $f"
done

shopt -s nullglob
for f in ../../tests/fail.*
do
    ../../../scripts/tester.sh fail "./daffodil parse -V daffodil $f"
done
popd
