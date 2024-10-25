#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}



int main()
{
    
    int a;
    int b;
    
    a = 16;
    b = 24;
    
    if (a < 0 || b < 0) {
        return 1;
    }
    else {
        cout << "Greater Common Division of " << a << " and " << b << " is " << gcd(a,b) << endl;
    }
    
    
    
    
}