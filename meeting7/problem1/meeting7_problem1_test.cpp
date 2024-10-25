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
    
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter an operation (+ or -)" << endl;
    cin >> operation;
    cout << "Enter second number" << endl;
    cin >> b;
    
    if (operation == '+') {
        add(a,b);
    }
    else{
        subtract(a,b);
    }
    
    
    
}