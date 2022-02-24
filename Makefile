
main: main.o tasks.o
	g++ -o main main.o tasks.o

main.o: main.cpp tasks.h
	g++ -c main.cpp

tasks.o: tasks.cpp tasks.h
	g++ -c tasks.cpp

clean:
	rm -f main.o tasks.o
