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
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<int> reversedNumbers = reverseVector(numbers);
    
    cout << "The reversed vector -> ";
    for (int num : reversedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}