// This file will contain the loops part.
// printing the numbers to the value till which the user wants.
#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the value till whitch you want the numbers to be printed : " << endl; 
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        cout << i << " " << endl;
        i = i + 1;
    }
    

    return 0;
}

