// Q1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 8;
//     int second = 18;
//     int *ptr = &second;
//     *ptr = 9;
//     cout << first << " - " << second << endl;

//     return 0;
// }

// OUTPUT:
// 8 - 9

// Q2

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 6;
//     int *p = &first; 
//     int *q = p;
//     (*q)++;
//     cout << first << endl;

//     return 0;
// }

// OUTPUT:
// 7

// Q3

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 8;
//     int *p = &first;

//     cout << (*p)++ << " ";
//     cout << first << endl;
//     return 0;
// }

// OUTPUT:
// 8 9

// Q4

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *p = 0;
//     int first = 110;
//     *p = first;

//     cout << *p << endl;
//     return 0;
// }

// OUTPUT:
// segmentation fault

// Q5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *p = 0;
//     int first = 110;
//     p = &first;

//     cout << *p << endl;
//     return 0;
// }

// OUTPUT:
// 110

// Q6

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 8;
//     int second = 11;
//     int *third = &second;
//     first = *third;
//     *third = *third + 2;
//     cout << first << " - " << second << endl;

//     return 0;
// }

// OUTPUT:
// 11 - 13

// Q7

// #include<iostream>
// using namespace std;

// int main()
// {
//     float f = 12.5;
//     float p = 21.5;
//     float *ptr = &f;
//     (*ptr)++;
//     *ptr = p;

//     cout << *ptr << " - " << f << " - " << p << endl;
//     return 0;
// }

// OUTPUT:
// 21.5 - 21.5 - 21.5

// Q8

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     int *ptr;

//     cout << sizeof(arr) << " - " << sizeof(ptr) << endl;
//     return 0;
// }

// OUTPUT:
// 20 - 8

// Q9

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {11, 21, 13, 14};

//     cout << *(arr) << " - " << *(arr + 1) << endl;
//     return 0;
// }

// OUTPUT:
// 11 - 21

// Q10

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {11, 12, 31};

//     cout << arr << " - " << &arr << endl; 
//     return 0;
// }

// OUTPUT:
// address of 11 - address of 11

// Q11

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {11, 21, 13};

//     cout << (arr + 1) << endl; 
//     return 0;
// }

// OUTPUT:
// address of 21

// Q12

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {11, 21, 31};
//     int *ptr = arr;

//     cout << ptr[2] << endl; // (arr + 1)
//     return 0;
// }

// OUTPUT:
// 31

// Q13

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {11, 12, 13, 14, 15};
    
//     cout << *arr << " - " << *(arr + 3) << endl;
//     return 0;
// }

// OUTPUT:
// 11 - 14

// Q14

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {11, 21, 31, 41};
//     int *ptr = arr++;

//     cout << *ptr << endl;
//     return 0;
// }

// OUTPUT:
// as we cannot change the size of array like this; so error

// Q15

// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch = 'a';
//     char *ptr = &ch;
//     ch++;

//     cout << *ptr << endl;
//     return 0;
// }

// OUTPUT:
// b

// Q16

// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[] = "abcde";
//     char *ptr = &arr[0];

//     cout << *ptr << endl; 
//     return 0;
// }

// OUTPUT:
// a

// Q17

// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch[] = "abcde";
//     char *p = &ch[0];
//     p++;

//     cout << p << endl;
//     return 0;
// }

// OUTPUT:
// bcde

// Q18

// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch[] = "hello";
//     char *p = ch;

//     cout << ch[0] << " - " << p[0] << endl;
//     return 0;
// }

// OUTPUT:
// h - h

// Q19

// #include<iostream>
// using namespace std;

// void update(int *p){
//     *p = *p * 2;
// }
// int main()
// {
//     int i = 10;

//     update(&i);

//     cout << i << endl;

//     return 0;
// }

// OUTPUT:
// 20

// Q20

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second = (**q)++ + 9;

//     cout << first << " - " << second << endl;
//     return 0;
// }

// OUTPUT:
// 111 - 119

// Q21

// #include<iostream>
// using namespace std;

// int main()
// {
//     int first = 100;
//     int *p = &first;
//     int **q = &p;
//     int second = ++(**q);
//     int *r = *q;
//     ++(*r);

//     cout << first << " - " << second << endl;
//     return 0;
// }

// OUTPUT:
// 102 - 101

// Q22

#include<iostream>
using namespace std;

void increment(int **p){
    ++(**p);
}
int main()
{
    int num = 110;
    int *ptr = &num;

    increment(&ptr);

    cout << num << endl;
    return 0;
}

// OUTPUT:
// 111