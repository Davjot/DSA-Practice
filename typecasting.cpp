#include<iostream>
using namespace std;
int main()
{
    float a = 12.34;
    double b = 65.5;
    int c;
    char d;

    c = (int) a;
    d =  static_cast <char> (b);

    cout << "The value of c variable is : " << c << endl;
    cout << "The size of c variable is : " << sizeof(c) << endl;

    cout << "The value of d variable is : " << d << endl;
    cout << "The size of d varible is : " << sizeof(d) << endl;

    return 0;
}