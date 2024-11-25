# Target to compile the object file
finalexam_problem2: finalexam_problem2.o
	g++ finalexam_problem2.o -o finalexam_problem2.exe

# Target to compile the C++ program
finalexam_problem2.o: finalexam_problem2.cpp
	g++ -c finalexam_problem2.cpp -o finalexam_problem2.o

# Target to run the program (interactively)
run: finalexam_problem2
	./finalexam_problem2.exe

# Target to compile the object Test file
finalexam_problem2_test: finalexam_problem2_test.o
	g++ finalexam_problem2_test.o -o finalexam_problem2_test.exe

# Target to compile the C++ Test program
finalexam_problem2_test.o: finalexam_problem2_test.cpp
	g++ -c finalexam_problem2_test.cpp -o finalexam_problem2_test.o

# Target to run the Test program
test: finalexam_problem2_test
	./finalexam_problem2_test.exe

# Target to clean up compiled files
clean:
	rm -f finalexam_problem2.o finalexam_problem2_test.o finalexam_problem2.exe finalexam_problem2_test.exe

all:
	g++ -o finalexam_problem2 finalexam_problem2.cpp

dump:
	objdump -d finalexam_problem2 > finalexam_problem2.asm
