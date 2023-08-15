#include<iostream>
using namespace std;

int score  = 15; // global variable

void a(int &i){
    cout << score << " in a function" << endl;

    char ch = 'a';
    cout << i << endl;
    // b(i);
}

void b(int &i){
    cout << score << " in b function" << endl;
    cout << i << endl;
}

int main()
{
    cout << score << " in main function" << endl;

    int i = 5;

    a(i);

    b(i);
    return 0;
}