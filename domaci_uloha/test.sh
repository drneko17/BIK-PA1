#!/bin/bash

for X in {0000..0100} ; do
    if [ ! -e samples/${X}_in.txt ] ; then
        echo "All ok"
        exit 0
    fi
    echo "Testing: samples/${X}_in.txt"
    ./uloha12 < samples/${X}_in.txt > /tmp/out.txt
    if ! diff samples/${X}_out.txt /tmp/out.txt ; then
        echo "Mismatch samples/${X}_in.txt"
        exit 1
    fi

done