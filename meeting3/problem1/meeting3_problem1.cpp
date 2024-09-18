#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Insert the coefficient a: ";
    cin >> a;
    cout << "Insert the coefficient b: ";
    cin >> b;
    cout << "Insert the coefficient c: ";
    cin >> c;
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "There are two distinct real roots." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "There is exactly one root." << endl;
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "No real roots or roots are complex." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
