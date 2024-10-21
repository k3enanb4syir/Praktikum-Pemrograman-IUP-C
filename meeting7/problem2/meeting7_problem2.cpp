#include <iostream>
using namespace std;

int factorial(int x) {
    if (x==0){
        return 1;
    }
    else {
        return x*factorial(x-1);
    }
}



int main()
{
    int n;
    
    
    cout << "Enter a number" << endl;
    cin >> n;
    
    if (n < 0) {
        return 1;
    }
    else {
        cout << "The factorial of " << n << " is " << factorial(n) << endl;
    }
    
}