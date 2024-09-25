#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;
    
    for (int i = input.size() - 1; i >= 0; i--) {
        reversed.push_back(input[i]); 
    }
    
    return reversed;
}

int main() {
    
    int vectors;
    
    cout << "The vectors: 1, 2, 3, 4, 5, 6, 7, 8 (press any button to reverse vector)";
    cin >> vectors;
   
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};
    
  
    vector<int> reversedNumbers = reverseVector(numbers);
    
    
    cout << "The reversed vector -> ";
    for (int num : reversedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}