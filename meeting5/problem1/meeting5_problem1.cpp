#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> result, fizzbuzzresult;
    
    
    for (int i = 1; i <= 100; i++) {
        string result = "";
        
        if (i % 3 == 0){
        result += "Fizz";
        }
        
        if (i % 5 ==0){
        result += "Buzz";
        }
        
        if (result == ""){
            result = to_string(i);
        }
        
        fizzbuzzresult.push_back(result);
        
    }
    
    for (const string& value : fizzbuzzresult) {
        cout << value << "  ";
    }
    
    
}
