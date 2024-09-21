#include <iostream>
using namespace std;

int main(){
    
    int num, sum;
    
    cout << "Enter a postive integer -> ";
    cin >> num;
    
    for (int i = 1; i <= num; ++i) {
        sum +=i;
    }
    
    cout << "The sum of all natural numbers up to " << num << " is = " << sum << endl;

}