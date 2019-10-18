HeapOfStudents:address.o student.o date.o main.o
	g++ address.o student.o date.o main.o -o HeapOfStudents
main.o:main.cpp student.h date.h address.h
	g++ -c main.cpp
address.o:address.h address.cpp
	g++ -c address.cpp
student.o:student.h student.cpp address.h date.h
	g++ -c student.cpp
date.o:date.cpp date.h
	g++ -c date.cpp 
clean:
	rm -f HeapOfStudents *.o
run: HeapOfStudents
	./HeapOfStudents