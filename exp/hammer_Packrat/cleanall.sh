#!/bin/bash
# Just cleans all parsers

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd "$@" > /dev/null
}

if [ $# == 1 ] && [ $1 == "-h" ]; then
		echo "usage: cleanall.sh [-h | -s]"
		echo "   -h : help"
		echo "   -s : *show* compilation"
		exit
fi

# quiet by default
MODE=-s
if [ $# == 1 ] && [ $1 == "-s" ]; then
		unset MODE
fi

# clean the ppxl library
pushd ./ppxml
echo [ppxml]
make ${MODE} clean
popd

# All grammars not listed here are experimental and unused
# NOTE: DO NOT PUT xbnf or abnf in this list
for DIR in gmr0 gmr1 usps bin0 bin1 bin2 command response fwi fwi_range \
				 jnum jstring json junicode json.unicode \
				 mavlink_1_msg mavlink_3_msgs mavlink_10_msgs mavlink \
				 spp \
				 J1939 url http
do
		if [ -d ./${DIR}/hmr ] ; then
				pushd ./${DIR}/hmr
				echo [$DIR/hmr]
				rm -f Makefile
				ln -s ../../Makefile.hmr ./Makefile				
				make ${MODE} clean
				popd
		fi
done

