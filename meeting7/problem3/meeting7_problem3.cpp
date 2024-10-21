#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return 1;
    }
    else {
        return gcd(b, a%b);
    }
}



int main()
{
    
    int a;
    int b;
    
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "Enter a second number" << endl;
    cin >> b;
    
    if (a < 0 || b < 0) {
        return 1;
    }
    else {
        cout << "Greater Common Division of " << a << " and " << b << " is " << gcd(a,b) << endl;
    }
    
    
    
    
}