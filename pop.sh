#!/bin/bash


cd /tmp
mkdir newtemp
cd newtemp


for i in {1..20}; do dd if=/dev/urandom bs=3 count=1 of=file$i; done
