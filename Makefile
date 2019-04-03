CC=g++
CXXFLAGS=-g -Wall -std=c++11
SRC=main.o dfs.o

main: main.o dfs.o
		$(CXX) $(CXXFLAGS) -o main main.o dfs.o

main.o: main.cpp

dfs.o: dfs.cpp

clean:
	rm $(SRC) main
