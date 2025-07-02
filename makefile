CXX = g++
CXXFLAGS = -std=c++20 -Wall -fsanitize=address,leak -g
LDFLAGS = -fsanitize=address,leak

.PHONY: all clean

all: inOneWeekend

inOneWeekend: main.o 
	${CXX} ${LDFLAGS} main.o -o inOneWeekend
main.o: main.cpp
	${CXX} ${CXXFLAGS} main.cpp -c -o main.o 
clean:
	rm -f *.o inOneWeekend