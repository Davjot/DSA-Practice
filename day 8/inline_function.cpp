#include<iostream>
using namespace std;

inline int getmax(int a, int b){
    return (a > b) ? a : b; // one lien code in function is called inline function
}
int main()
{
    int a = 1;
    int b = 2;
    int ans = 0;

    ans  = getmax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getmax(a, b);
    cout << ans << endl;
    return 0;
}