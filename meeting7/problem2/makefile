# Target to compile the object file
meeting7_problem2: meeting7_problem2.o
	g++ meeting7_problem2.o -o meeting7_problem2.exe

# Target to compile the C++ program
meeting7_problem2.o: meeting7_problem2.cpp
	g++ -c meeting7_problem2.cpp -o meeting7_problem2.o

# Target to run the program (interactively)
run: meeting7_problem2
	./meeting7_problem2.exe

# Target to compile the object Test file
meeting7_problem2_test: meeting7_problem2_test.o
	g++ meeting7_problem2_test.o -o meeting7_problem2_test.exe

# Target to compile the C++ Test program
meeting7_problem2_test.o: meeting7_problem2_test.cpp
	g++ -c meeting7_problem2_test.cpp -o meeting7_problem2_test.o

# Target to run the Test program
test: meeting7_problem2_test
	./meeting7_problem2_test.exe

# Target to clean up compiled files
clean:
	rm -f meeting7_problem2.o meeting7_problem2_test.o meeting7_problem2.exe meeting7_problem2_test.exe

all:
	g++ -o meeting7_problem2 meeting7_problem2.cpp

dump:
	objdump -d meeting7_problem2 > meeting7_problem2.asm
