#!/bin/bash
pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd "$@" > /dev/null
}

# by default mode be silent on compiles
if [ $# == 1 ] && [ $1 == "-h" ]; then
		echo "usage: runall.sh [-h | -O0 | -O1 | -O2 ]"
		exit
fi

TODAY=`date +"%m%d%Y"`

rm -f ./RESULTS/run.${TODAY}
touch ./RESULTS/run.${TODAY}

# All grammars not listed here are experimental and unused
# NOTE: DO NOT PUT xbnf or abnf in this list
for DIR in jnum jstring json junicode json.unicode \
 
do
		echo "[${DIR}]"
		./run.sh ${DIR} >> ./RESULTS/run.${TODAY}
done
