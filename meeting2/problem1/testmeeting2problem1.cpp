#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    double grosssalary, installment, insurance;
    
    name = "Clive Rosfield";
    double grosssalary = 100000;
    double installement = 2000;
    double insurance = 30000;
    
    return make_tuple(name, grosssalary, installement, insurance)
    

    return 0;
}