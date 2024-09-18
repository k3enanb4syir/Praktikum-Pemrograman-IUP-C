#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double basesalary, grosspercentage, installment, insurance;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter base salary: Rp";
    cin >> basesalary;
    cout << "Enter gross salary percentage: ";
    cin >> grosspercentage;
    cout << "Enter installment amount: Rp";
    cin >> installment;
    cout << "Enter insurance amount: Rp";
    cin >> insurance;

    double grosssalary = basesalary * (grosspercentage / 100);

    double tax = grosssalary * 0.20;

    double netsalary = grosssalary - tax - installment - insurance;

    cout << "\n|-------------------------------------------|" << endl;
    cout << "| Payslip                                   |" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "| Name: " << setw(36) << left << name << "|" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "| Base salary:        Rp" << setw(21) << right << fixed << setprecision(2) << basesalary << "|" << endl;
    cout << "| Gross salary:       Rp" << setw(18) << right << fixed << setprecision(2) << grosssalary << "|" << endl;
    cout << "| Tax:          -RP" << setw(22) << right << fixed << setprecision(2) << tax << "|" << endl;
    cout << "| Installment:        -Rp" << setw(18) << right << fixed << setprecision(2) << installment << "|" << endl;
    cout << "| Insurance:          -Rp" << setw(18) << right << fixed << setprecision(2) << insurance << "|" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "| Net salary:         Rp" << setw(20) << right << fixed << setprecision(2) << netsalary << "|" << endl;
    cout << "|-------------------------------------------|" << endl;

    return 0;
}
