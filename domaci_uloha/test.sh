#!/bin/bash

for X in {0000..0100} ; do
    if [ ! -e samples/${x}_in.txt ] ; then
        echo "All ok"
        exit 0;
    fi
    ./uloha12.out < samples/${X}_out.txt > /tmp/out.txt
    if ! diff samples/${X}_out.txt /tmp/out.txt ; then
        echo "Mismatch samples/${X}_in.txt"
    fi

done