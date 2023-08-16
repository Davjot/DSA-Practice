#include<iostream>
using namespace std;

int power(int n){
    
    if(n == 0){
        return 1;
    }

    int smallerProblem = power(n - 1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;

    // or
    // return 2 * power(n -1);
}

int main()
{
    int n;

    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans = power(n);

    cout << "Power of a number is : " << ans << endl;
    return 0;
}