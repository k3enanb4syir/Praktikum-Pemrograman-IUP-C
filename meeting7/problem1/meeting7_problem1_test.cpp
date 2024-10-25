#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Answer = " << a << "+" << b << " = " << a+b << endl;
}
void subtract(int a, int b) {
    cout << "Answer = " << a << "-" << b << " = " << a-b << endl;
}


int main()
{
    char operation;
    int a;
    int b;
    a = 8;
    operation = '+';
    b = 4;
    
    
    if (operation == '+') {
        add(a,b);
    }
    else{
        subtract(a,b);
    }
    
    
    
}