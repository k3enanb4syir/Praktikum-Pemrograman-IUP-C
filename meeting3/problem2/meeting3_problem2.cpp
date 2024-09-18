#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,largest;
    cout << "Enter the first number"<<endl;
    cin >> n1;
    cout << "Enter the second number"<<endl;
    cin >> n2;
    cout << "Enter the third number"<<endl;
    cin >> n3;
    
    if(n1 > n2 && n1 > n3)
    largest = n1;
    else if (n2>n1 && n2>n3)
    largest = n2;
    else
    largest = n3;
    cout << "The largest number out of the three number is "<< largest;
    
    return 0;
}
