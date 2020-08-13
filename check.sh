make clean
make distclean
./configure CC=clang CXX=clang++
scan-build make|&tee build.log

