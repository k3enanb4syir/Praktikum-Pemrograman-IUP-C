#include <iostream>
using namespace std;

int main(){
    
    int num, sum;
    
    cout << "Enter a postive integer -> ";
    cin >> num;
    cout << "Multiplacation table of integer " << num << "with integers from 1 to 10" << endl;
    
    for (int i = 1; i <= 10; i++) {
        sum *=i;
        cout << "----------" << endl;
        cout << num << " * " << i << " = " << num*i << endl;
        
    }
    
}