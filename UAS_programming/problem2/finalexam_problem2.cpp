#include <iostream> //palindrome check
#include <string> 
using namespace std;

int main()
{
    string str, reversedStr;
    
    cout << "Enter a string (Example: Your Name)" << endl;
    cin >> str;
    
    reversedStr = string(str.rbegin(), str.rend());
    
    if(str == reversedStr){
        cout << "It is a Palindrome" << endl;
    }
    else {
        cout << "It is NOT a Palindrome" << endl;
    }
    
}