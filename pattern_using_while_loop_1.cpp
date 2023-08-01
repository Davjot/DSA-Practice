// pattern 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// ***
// ***
// ***

// pattern 2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// 111
// 222
// 333

// pattern 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << j;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// 123
// 123
// 123

// pattern 4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// 321
// 321
// 321

// pattern 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     int count = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << count << "";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// 123
// 456
// 789

// pattern 6

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// *
// **
// ***
// ****

// pattern 7

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// 1
// 22
// 333
// 4444

// pattern 8

// #include <iostream>

// using namespace std;

// int main() {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int count = 1;
//     int i = 1;

//     while (i <= n) {
//         int j = 1;
//         while (j <= i) {
//             cout << count << " ";
//             count = count  + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// the following pattern observed is : n = 4
// 1
// 2 3
// 4 5 6 
// 7 8 9 10

// pattern 9

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j  = 1;
//         int value  = i;
//         while (j <= i)
//         {
//             cout << value;
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i  + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// 1
// 2 3
// 3 4 5 
// 4 5 6 7

// pattern 10

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i - j + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// 1
// 2 1
// 3 2 1 
// 4 3 2 1

// pattern 11

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char  ch = 'A' + i - 1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// the following pattern observed is : n = 3
// A A A
// B B B
// C C C

// pattern 12

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + j - 1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// A B C
// A B C
// A B C

// rest of the patterns are there in pattern_2.cpp
