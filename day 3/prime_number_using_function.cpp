#include<iostream>
using namespace std;

// 1 --> Prime number
// 0 --> Not prime number
bool isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;       
        }
    }
    return 1;
}
int main()
{
    int num;

    cout << "Enter the number : " << endl;
    cin >> num;

    if (isPrime(num))
    {
        cout << "Prime number " << endl;
    }
    else{
        cout << "Not prime number " << endl;
    }
    
    return 0;
}