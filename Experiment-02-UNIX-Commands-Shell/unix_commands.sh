#!/bin/bash

echo "===== UNIX COMMANDS ====="

echo "--- DATE ---"
date

echo "--- CURRENT DIRECTORY ---"
pwd

echo "--- FILES AND DIRECTORIES ---"
ls

echo "--- CURRENT USER ---"
whoami

echo "--- TERMINAL ---"
tty

echo "--- ECHO ---"
echo "Hello UNIX"

echo "--- WORD COUNT ---"
echo "Operating System Lab" > sample.txt
wc sample.txt

echo "--- FILE CONTENT ---"
cat sample.txt

echo "--- SORT ---"
printf "banana\napple\norange\n" > fruits.txt
sort fruits.txt

echo "--- GREP ---"
grep "apple" fruits.txt

echo "--- TR ---"
echo "unix operating system" | tr "[a-z]" "[A-Z]"

echo "--- HEAD ---"
head -n 2 fruits.txt

echo "--- TAIL ---"
tail -n 2 fruits.txt