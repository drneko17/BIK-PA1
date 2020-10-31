FILE=uloha1
TEST_DATA=./samples1

for X in {0000..0100} ; do
    if [ ! -e $TEST_DATA/${X}_in.txt ] ; then
        echo "POGCHAMP"
        exit 0
    fi
    echo "Testing: samples/${X}_in.txt"
    ./$FILE < $TEST_DATA/${X}_in.txt > /tmp/out.txt
    if ! diff $TEST_DATA/${X}_out.txt /tmp/out.txt ; then
        echo "RIP samples/${X}_in.txt"
        exit 1
    fi

done