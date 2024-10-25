# Target to compile the object file
meeting7_problem3: meeting7_problem3.o
	g++ meeting7_problem3.o -o meeting7_problem3.exe

# Target to compile the C++ program
meeting7_problem3.o: meeting7_problem3.cpp
	g++ -c meeting7_problem3.cpp -o meeting7_problem3.o

# Target to run the program (interactively)
run: meeting7_problem3
	./meeting7_problem3.exe

# Target to compile the object Test file
meeting7_problem3_test: meeting7_problem3_test.o
	g++ meeting7_problem3_test.o -o meeting7_problem3_test.exe

# Target to compile the C++ Test program
meeting7_problem3_test.o: meeting7_problem3_test.cpp
	g++ -c meeting7_problem3_test.cpp -o meeting7_problem3_test.o

# Target to run the Test program
test: meeting7_problem3_test
	./meeting7_problem3_test.exe

# Target to clean up compiled files
clean:
	rm -f meeting7_problem3.o meeting7_problem3_test.o meeting7_problem3.exe meeting7_problem3_test.exe

all:
	g++ -o meeting7_problem3 meeting7_problem3.cpp

dump:
	objdump -d meeting7_problem3 > meeting7_problem3.asm
