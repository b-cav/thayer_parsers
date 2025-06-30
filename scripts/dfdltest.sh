#!/bin/bash
shopt -s nullglob
for f in ../tests/pass.*
do
		tester.sh pass "daffodil parse -s gmr.dfdl.xsd -V on $f"
done

shopt -s nullglob
for f in ../tests/fail.*
do
		tester.sh fail "daffodil parse -s gmr.dfdl.xsd -V on $f"
done
