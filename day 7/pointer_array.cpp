#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[10] = {10, 22, 3};

    cout << "Address of first memory block is : " << arr << endl; // arr is used to print the address of first memory block in array
    cout << arr[0] << endl;
    cout << "Address of first memory block is : " << &arr[0] << endl;

    cout << "1st : " << *arr << endl;
    cout << "2nd : " << *arr + 1 << endl; // increments the first value of arr
    cout << "3rd : " << *(arr + 1) << endl; // prints second value of arr
    cout << "4th : " << *(arr) + 1 << endl; // same as 2nd
    cout << "5th : " << arr[2] << endl;
    cout << "6th : " << *(arr + 2) << endl;

    int i = 3;
    cout << i[arr] << endl; */

    /*
    int temp[10] = {10, 22};
    cout << "size of temp is : " << sizeof(temp) << endl; // as in int = 4 bytes; 10x4 = 40
    cout << "1st : " << sizeof(&temp) << endl; // as address is stored
    cout << "2nd : " << sizeof(*temp) << endl; // as int is stored

    int *ptr = &temp[0];
    cout << "3rd : " << sizeof(&ptr) << endl; 
    cout << "4th : " << sizeof(ptr) << endl;
    cout << "5th : " << sizeof(*ptr) << endl; */

    int a[20] = {1, 22, 3, 40};
    cout << "1st : " << &a[0] << endl;
    // cout << "2nd : " << &a << endl;
    // cout << "3rd : " << a << endl;

    int *p = &a[0];
    // cout << "2nd : " << p << endl;
    // cout << "3rd : " << *p << endl;
    cout << "2nd : " << &p << endl; // this will print the address of the p pointer not the address of a

    return 0;
}