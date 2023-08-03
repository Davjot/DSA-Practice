// Q1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b = 1;
//     a = 10;

//     if(++a){
//         cout << b;
//     }
//     else{
//         cout << ++b;
//     }
//     return 0;
// }

// output :
// 1

// Q2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 && ++b > 2) 
//     {
//         cout << "Stage1 - Inside If ";
//     } else
//     {
//         cout << "Stage2 - Inside Else";
//     }
//     cout << a << " " << b << endl;
    
//     return 0;
// }

// output :
// Stage1 - Inside1 If 0 3

// Q3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 || ++b > 2) 
//     {
//         cout << "Stage1 - Inside If ";
//     } else
//     {
//         cout << "Stage2 - Inside Else";
//     }
//     cout << a << " " << b << endl;
    
//     return 0;
// }

// output : 
// Stage1 - Inside If 0 2

// Q4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number = 3;
//     cout << (25 * (++number));
//     return 0;
// }

// output : 
// 100

// Q5 

#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;
    return 0;
}

// output : 
// b = 1
// c = 3
