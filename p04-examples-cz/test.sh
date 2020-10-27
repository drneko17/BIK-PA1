#!/bin/bash


#path to test data
TEST_DATA=./test01_1

# iterate i: 0 1 2 ... 100 
for i in $(seq 0 100) ; do
  if [ ! -e $TEST_DATA/$i.in ] ; then
    # no more input files
    echo "Done"
    exit 0
  fi
  
  echo -n "Test $i: "
  ./a.out < $TEST_DATA/$i.in > data.out
  if [ $? -gt 64 ] ; then
    # segmentation fault or a similar problem 
    exit 1
  fi
  
  if ! diff $TEST_DATA/$i.ref data.out ; then
    # output mismatch
    echo "Test $TEST_DATA/$i.in failed";
    exit 1
  fi
  echo "OK";
done
