# Target to compile the object file
meeting7_problem1: meeting7_problem1.o
	g++ meeting7_problem1.o -o meeting7_problem1.exe

# Target to compile the C++ program
meeting7_problem1.o: meeting7_problem1.cpp
	g++ -c meeting7_problem1.cpp -o meeting7_problem1.o

# Target to run the program (interactively)
run: meeting7_problem1
	./meeting7_problem1.exe

# Target to compile the object Test file
meeting7_problem1_test: meeting7_problem1_test.o
	g++ meeting7_problem1_test.o -o meeting7_problem1_test.exe

# Target to compile the C++ Test program
meeting7_problem1_test.o: meeting7_problem1_test.cpp
	g++ -c meeting7_problem1_test.cpp -o meeting7_problem1_test.o

# Target to run the Test program
test: meeting7_problem1_test
	./meeting7_problem1_test.exe

# Target to clean up compiled files
clean:
	rm -f meeting7_problem1.o meeting7_problem1_test.o meeting7_problem1.exe meeting7_problem1_test.exe

all:
	g++ -o meeting7_problem1 meeting7_problem1.cpp

dump:
	objdump -d meeting7_problem1 > meeting7_problem1.asm
