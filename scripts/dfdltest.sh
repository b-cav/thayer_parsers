#!/bin/bash
shopt -s nullglob
for f in ../tests/pass.*
do
		tester.sh pass "daffodil parse -P parser.xml -V limited $f"
done

shopt -s nullglob
for f in ../tests/fail.*
do
		tester.sh fail "daffodil parse -P parser.xml -V limited $f"
done
