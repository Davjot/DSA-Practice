#include<iostream>
using namespace std;

int power(int a, int b){

    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    // if b is even
    if(b % 2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans; // b is odd
    }
}

int main()
{
    int a, b;

    cout << "Enter the value of a : " << endl;
    cin >> a;

    cout << "Enter the value of b : " << endl;
    cin >> b;

    int ans = power(a, b);

    cout << "Power of a number " << a << " raised to " << b << " is : " << ans << endl;
    return 0;
}