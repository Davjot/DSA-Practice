#include<iostream>
using namespace std;

int main()
{
    /*
    int num = 5;

    cout << num << endl;

    // address operator - &
    cout << "Address of num is : " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value of ptr is : " << *ptr << endl; // this is called de-referencing a pointer 

    double d = 4.3;
    double *ptr2 = &d;

    cout << "Address is : " << ptr2 << endl;
    cout << "Value of ptr is : " << *ptr2 << endl;

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl; 
    */

    // int *p = 0; // pointer to int is created and pointing to some garbage address

    // cout << *p << endl;

    /*
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

   /*
   int num = 5;
   int a = num;

   cout << "a before : " << a << endl;
   a++;
   cout << "a after : " << a << endl;

   int *p = &num;
   cout << "before : " << num << endl;
   (*p)++;
   cout << "after : " << num << endl;

   // copy a pointer
   int *q = p;
   cout << p << " - " << q << endl;
   cout << *p << " - " << *q << endl;
   */

   int i = 3;
   int *t = &i;
// cout << (*t)++ << endl;
   *t = *t + 1;
   cout << *t << endl;
   cout << "before t : " << t << endl;
   t = t + 1;
   cout << "after t : " << t << endl;

    return 0;
}