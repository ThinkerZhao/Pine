#!/bin/bash
TOPDIR=${PWD}
TARGET=application.exe
echo $DATE >./OUTPUT/log/build.log

echo "...#Start build platform#..."
cd platform/units
    echo ${PWD} >>../../OUTPUT/log/build.log
    mingw32-make clean;
    mingw32-make;
    cd -
echo "...#End build platform#..."
echo ${PWD} >>./OUTPUT/log/build.log
echo "...#Start build application#..." >>./OUTPUT/log/build.log
echo ${TARGET} >>./OUTPUT/log/build.log
rm -f ./test.exe
gcc ./application/src/application.c ./platform/units/src/base64.c -o ./OUTPUT/target/application.exe
cd application
    echo ${PWD} >>../OUTPUT/log/build.log; 
    mingw32-make; 
    cd -
echo "...#End build application#..." >>./OUTPUT/log/build.log    
