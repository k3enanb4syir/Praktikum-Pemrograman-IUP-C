#include <iostream> //find area of circle
using namespace std;

int main()
{
    float PI = 3.14159;
    float r;
    float radius;
    float area;
    
    cout << "Finding area of circle" << endl;
    cout << "Value of PI = " << PI << endl;
    cout << "Enter a number for the radius of circle" << endl;
    cin >> r;
    
    radius = r*r;
    area = radius*PI;
    
    cout << "Area of circle = " << area << endl;
    
    
    
}