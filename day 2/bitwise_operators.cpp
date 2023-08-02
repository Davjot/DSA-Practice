// this file will include AND, OR, NOT and XOR OPERTAORS 

#include<iostream>
using namespace std;
int main()
{
    // int a, b;

    // cout << "enter the first number : " << endl;
    // cin >> a;

    // cout << "enter the second number : " << endl;
    // cin >> b;

    // cout << 'AND operation between a and b is : ' << (a&b) << endl;

    // cout << 'OR operation between a and b is : ' << (a|b) << endl;

    // cout << 'NOT operation of operator a is : ' << (~a) << endl;

    // cout << 'XOR operation between a and b is : ' << (a^b) << endl;

    // Left shift and Right Shift operators 

    // right shift : this would be division by 2 like 17/2 = 8, 17/2x2 = 4
    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;

    // left shift : for small number the answer is always multiply by 2 like 19x2 = 38, 21x2x2 = 84
    // cout << (19 << 1) << endl;
    // cout << (21 << 2) << endl;

    // post and pre incremenet/decrement operators 
    int i = 7;

    cout << (++i) << endl; // now i = 8
    cout << (i++) << endl; // i = 8 
    cout << (i--) << endl; // i = 9 
    cout << (--i) << endl; // i = 7 

    return 0;
}