euler: main.cpp 1-10.h
	g++ main.cpp -Werror -Wpedantic -Wall  -o euler

test: tests.cpp *.h
	g++ tests.cpp -Werror -Wpedantic -Wall -I/usr/local/include/gtest  /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a -o tests
