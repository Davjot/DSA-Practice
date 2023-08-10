#include<iostream>
using namespace std;

// 1 --> Even
// 0 --> Odd

bool isEven(int a){
    // odd
    if (a & 1)
    {
        return 0;
    }
    else{
        return 1;
    }
    
}
int main()
{
    int num;

    cout << "Enter the number : " << endl;
    cin >> num ;

    if (isEven(num))
    {
        cout << "Number is Even " << endl;
    }
    else{
        cout << "Number is ODD" << endl;
    }
    
    return 0;
}