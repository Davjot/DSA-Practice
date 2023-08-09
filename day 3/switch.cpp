#include<iostream>
using namespace std;
int main()
{
    char ch  = '1';
    int num = 1;

    // cout << ch;

    switch (ch)
    {
    case 1:
        cout << "First" <<  endl;
        cout << "First again" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "Value of num is " << num << endl;
            break;
        
        default:
            cout << "This is the default case " << endl;
            break;
        }
    
    default:
        break;
    }                   
    return 0;
}