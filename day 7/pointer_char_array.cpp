#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; // 6 because one place is kept for null string

    cout << arr << endl;

    cout << ch << endl; // it prints the whole character array; not the addresss of first memory block

    char *c = &ch[0];
    cout << c << endl; // prints the entire string

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; // it will print z along with some characters that are unknown till it finds the null string
    return 0;
}