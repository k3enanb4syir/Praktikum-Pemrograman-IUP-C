# Target to compile the object file
meeting8_problem1: meeting8_problem1.o
	g++ meeting8_problem1.o -o meeting8_problem1.exe

# Target to compile the C++ program
meeting8_problem1.o: meeting8_problem1.cpp
	g++ -c meeting8_problem1.cpp -o meeting8_problem1.o

# Target to run the program (interactively)
run: meeting8_problem1
	./meeting8_problem1.exe

# Target to compile the object Test file
meeting8_problem1_test: meeting8_problem1_test.o
	g++ meeting8_problem1_test.o -o meeting8_problem1_test.exe

# Target to compile the C++ Test program
meeting8_problem1_test.o: meeting8_problem1_test.cpp
	g++ -c meeting8_problem1_test.cpp -o meeting8_problem1_test.o

# Target to run the Test program
test: meeting8_problem1_test
	./meeting8_problem1_test.exe

# Target to clean up compiled files
clean:
	rm -f meeting8_problem1.o meeting8_problem1_test.o meeting8_problem1.exe meeting8_problem1_test.exe

all:
	g++ -o meeting8_problem1 meeting8_problem1.cpp

dump:
	objdump -d meeting8_problem1 > meeting8_problem1.asm
