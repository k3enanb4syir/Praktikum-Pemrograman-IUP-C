all:
	g++ -o problem1_payslip problem1_payslip.cpp

problem1_payslip:
	g++ -o problem1_payslip problem1_payslip.cpp testmeeting2problem1.cpp

dump:
	objdump -d problem1_payslip > problem1_payslip.asm

clean:
	rm -f problem1_payslip.o problem1_payslip

run: problem1_payslip
	./problem1_payslip

run_test: testmeeting2problem1
	./testmeeting2problem1		
