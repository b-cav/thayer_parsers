#
# THE STANDARD DFDL MAKEFILE -- DO NOT CHANGE OR MOVE THIS FILE
# This file is used to clean, make, or run all Daffodil parsers
#

all:		schema

schema:
			bash -c "daffodil save-parser -s schema.dfdl.xsd parser.xml";

c: schema.dfdl.xsd
		bash -c "daffodil generate c -s schema.dfdl.xsd";
run:
			dfdltest.sh

clean:
			rm -rf *~ parser.xml c
