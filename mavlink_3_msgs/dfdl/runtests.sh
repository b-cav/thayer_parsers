perfect=0

for file in ../tests/pass.*; do
    # echo "PARSING $file CURRENTLY; SHOULD PASS"
    ./c/daffodil parse -V daffodil $file &> /dev/null
    if [[ $? = 0 ]]; then
        :
    else
        echo "FALSE NEGATIVE AT $file"
        perfect = 1
    fi
done

for file in ../tests/fail.*; do
    # echo "PARSING $file CURRENTLY; SHOULD FAIL"
    ./c/daffodil parse -V daffodil $file &> /dev/null
    if [[ $? = 0 ]]; then
        echo "FALSE POSITIVE AT $file"
        perfect = 1
    else
        :
    fi
done

if [[ "$perfect" = 0 ]]; then
    echo "All tests passed."
else
    :
fi
