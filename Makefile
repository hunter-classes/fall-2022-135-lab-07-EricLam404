main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

tests: tests.o unindent.o indent.o
	g++ -o tests tests.o unindent.o indent.o

main.o: main.cpp 

tests.o: tests.cpp
	g++ -c -std=c++11 tests.cpp

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

clean:
	rm -f main.o tests.o unindent.o indent.o main tests unindent indent
