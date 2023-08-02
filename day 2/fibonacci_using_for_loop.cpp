#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the value of n : " << endl;
    cin >> n;

    int a = 0;
    int b = 1; 

    cout << a << endl;
    cout << b << endl;

    for(int i = 1; i <=n ; i++){
        int next_number = a + b;
        cout << next_number << endl;

        a = b;
        b = next_number;
    }
    return 0;
}