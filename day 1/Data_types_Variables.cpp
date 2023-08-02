#include<iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;
    cout<< "Size of a is : " << sizeof(a) << endl;

    char d = 'D';
    cout<< d << endl;
    cout<< "Size of d is : " << sizeof(d) << endl;

    float b = 12.3;
    cout<< b << endl;
    cout<< "Size of b is : " << sizeof(b) << endl;

    double c = 12.300;
    cout<< c << endl;
    cout<< "Size of c is : " << sizeof(c) << endl;

    return 0;
}