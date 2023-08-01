// this program is for the if-else method
#include<iostream>
using namespace std;
int main()
{
    // taking input from the user
    // int n;

    // cin >> n; // this line helps in taking input from the user

    // cout << "Pirnt the value of n as: " << n << endl;

    // now to check if the number entered is negative or positive 

    // if (n > 0)
    // {
    //     cout << "the number entered is positive " << endl;
    // }
    // else{
    //     cout << "the number entered is negative" << endl;
    // }
    
    // now to compare the two numbers entered by the user 
    // int a, b;

    // cout << "enter the first number : " << endl;
    // cin >> a;

    // cout << "enter the second number : " << endl;
    // cin >> b;

    // if(a > b){
    //     cout << "the first number entered is greater than the second number" << endl;
    // }
    // if(b > a){
    //     cout << "The second number entered is greater than the first number" <<endl;

    // }

    // to chheck whether the number enter is postive, negative or zero 
    int p;

    cout << "please enter the number : " << endl;
    cin >> p;

    if(p < 0){
        cout << "the number entered is negative" << endl;
    }
    else if(p == 0){
        cout << "the entered number is zero" << endl;
    }
    else{
        cout << "the number entered is positive" << endl;
    }


    return 0;
}