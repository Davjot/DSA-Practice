#include<iostream>
using namespace std;

void update(int n){
    n++;
}

void update2(int &n){
    n++;
}

int main()
{
    /*
    int i = 5;

    // creating reference variable
    int &j = i; // this means that whenever i changes ; j also changes and j is also pointing to the same address of i

    cout << i << endl;

    i++;
    cout << i << endl;

    j++;
    cout << i << endl;
    cout << j << endl; */

    int n = 5;

    // cout << "Before n : " << n << endl;

    // update(n);

    // cout << "After n : " << n << endl;

    cout << "Before n : " << n << endl;

    update2(n);

    cout << "After n : " << n << endl;

    return 0;
}