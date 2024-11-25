#include <iostream> //palindrome check MAKETEST
#include <string> 
using namespace std;

int main()
{
    string str, reversedStr;
    
    str = "Keenan";
    
    reversedStr = string(str.rbegin(), str.rend());
    
    if(str == reversedStr){
        cout << "It is a Palindrome" << endl;
    }
    else {
        cout << "It is NOT a Palindrome" << endl;
    }
    
}