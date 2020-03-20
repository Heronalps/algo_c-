#!/bin/bash

g++ -std=c++11 $1.cpp -o $1.out
./$1.out
rm -rf $1.out