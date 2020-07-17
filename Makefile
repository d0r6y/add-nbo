all: add-nbo

add-nbo: bin_read.o main.o
	g++ -o add-nbo bin_read.o main.o

bin_read.o: bin_read.h bin_read.cpp
	g++ -c -o bin_read.o bin_read.cpp

main.o: main.cpp bin_read.h
	g++ -c -o main.o main.cpp

clean:
	rm -f add-nbo *.o

