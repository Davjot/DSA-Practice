#include<iostream>
using namespace std;

#define PI 3.14 // macro is defined like this

int main()
{
    int r;

    cout << "Enter the value of r : " << endl;
    cin >> r;
    
    double area = PI * r * r;

    cout << "Area of circle is : " << area << endl;
    return 0;
}