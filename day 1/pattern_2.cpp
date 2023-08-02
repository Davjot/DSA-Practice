// Contd.

// pattern 13

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     char ch = 'A';

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << ch << "";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// A B C
// D E F
// G H I

// pattern 14

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//      while (i <= n)
//      {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch;  
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//      }
     
//     return 0;
// } 

// the following pattern observed is : n = 3
// A B C
// B C D
// C D E

// pattern 15

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
//             char  ch = 'A' + i -1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// A 
// B B
// C C C

// pattern 16

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1; 
//     char ch = 'A';

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << ch;
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 3
// A 
// B C
// D E F

// pattern 17

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
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// A 
// B C
// C D E
// D E F G

// pattern 18

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
//         char ch = 'A' + n - i;
//         while (j <= i)
//         {
//             cout << ch;
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
// D
// C D
// B C D
// A B C D

// pattern 19

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
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
        
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
//    *
//   **
//  ***
// ****

// pattern 20

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
// 
//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = n;
// 
//     while (i > 0) {
//         int j = i;
//         while (j > 0) {
//             cout << "x ";
//             j = j - 1;
//         }
//         cout << endl;
//         i = i - 1;
//     }

//     return 0;
// }

// the following pattern observed is : n = 4
// x x x x
// x x x
// x x
// x

// pattern 21

// #include <iostream>
// using namespace std;
// int main() {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n) {
//         int space = 1;
//         while (space < i) {
//             cout << "  ";
//             space = space + 1;
//         }

//         int j = 1;
//         while (j <= n - i + 1) {
//             cout << "x ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// the following pattern observed is : n = 4
// x x x x
//   x x x
//     x x
//       x

// pattern 22

// #include <iostream>
// using namespace std;
// int main() {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n) {
//         int space = 1;
//         while (space < i) {
//             cout << "  ";
//             space = space + 1;
//         }

//         int j = 1;
//         while (j <= n - i + 1) {
//             cout << i << " ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// the following pattern observed is : n = 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4

// pattern 23

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
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
        
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i << "";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
//     return 0;
// }

// the following pattern observed is : n = 4
//    1
//   22
//  333
// 4444

// pattern 24

// #include <iostream>
// using namespace std;
// int main() {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     int space = 1;

//     while (i <= n) {
//         int j = i;
//         int space_count = 1;

//         while (space_count < space) {
//             cout << "  ";
//             space_count++;
//         }

//         while (j <= n) {
//             cout << j;
//             if (j < n) {
//                 cout << " ";
//             }
//             j++;
//         }

//         cout << endl;
//         i++;
//         space++;
//     }

//     return 0;
// }


// the following pattern observed is : n = 4
//  1 2 3 4
//    2 3 4
//      3 4
//        4

// pattern 25

// #include <iostream>
// using namespace std;
// int main() {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     int num = 1;
//     int spaces = n - 1;

//     while (i <= n) {
//         int spaceCount = 1;
//         while (spaceCount <= spaces) {
//             cout << " ";
//             spaceCount++;
//         }

//         int j = 1;
//         while (j <= i) {
//             cout << num << "";
//             num++;
//             j++;
//         }

//         cout << endl;
//         i++;
//         spaces--;
//     }

//     return 0;
// }

// the following pattern observed is : n = 4
//        1
//      2 3 
//    4 5 6
//  7 8 9 10

// pattern 26

#include<iostream>
using namespace std;
int main()
{
    int n; 

    cout << "enter the value of n :  " << endl;
    cin >> n;

    int i = 1;

    // first triangle
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
    // second triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
    // third traingle
        int start = i - 1;
        while (start )
        {
            cout << start;
            start = start - 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
    return 0;
}

// the following pattern observed is : n = 4
//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
