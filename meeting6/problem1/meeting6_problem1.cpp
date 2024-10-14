#include <iostream>
#include <string>
using namespace std;

struct data {
    
    string name;
    string nim;
    int uts;
    int uas;
    int average;
    
};

int main()
{
    int average;
    int i = 0;
    struct data student [50];
    char input = 1;
    cout << "Would you like to add new student? (1 = Yes | 0 = No)"<< endl;
    cin >>input;
    
    while (input == '1') {
        cout << "Enter the student name (Format: First name_Last name): " << endl;
        cin >> student[i].name;
        cout << "Enter the student NIM:" << endl;
        cin >> student[i].nim;
        cout << "Enter the UTS value:" << endl;
        cin >> student[i].uts;
        if (student[i].uts < 0 || student[i].uts > 100){
            cout << "Error. Try again by entering UTS value from 0-100"<<endl;
            continue;
        }
        cout << "Enter the UAS value:" << endl;
        cin >> student[i].uas;
        if (student[i].uas < 0 || student[i].uas > 100){
            cout << "Error. Try again by entering UTS value from 0-100"<<endl;
            continue;
        }
        cout << "Average Value = " << (student[i].uts + student[i].uas) /2 << "(Press 1 to Continue)" << endl;
        cin >> student[i].average;
        
    
    cout << "Student name: " << student[i].name << endl;
    cout << "NIM: " << student[i].nim << endl;
    cout << "UTS Value: " << student[i].uts << endl;
    cout << "UAS Value: " << student[i].uas << endl;
    cout << "Average Value = " << (student[i].uts + student[i].uas) /2 << endl;
    cout << "------------------" << endl;
    
    
    
      cout << "Would you like to add more student (1 = Yes | 0 = No)" << endl;
      cin >> input;
    if (input != '1'){
        cout << "-------------" << endl;
        cout << "Program ended" << endl;
        cout << "-------------" << endl;
        
    }
    
    }
    
}


