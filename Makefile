main: main.o unindent.o
	g++ -o main main.o unindent.o

tests: tests.o unindent.o
	g++ -o tests tests.o unindent.o

main.o: main.cpp 

tests.o: tests.cpp
	g++ -c -std=c++11 tests.cpp

unindent.o: unindent.cpp unindent.h

clean:
	rm -f main.o tests.o unindent.o unindent tests
