#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1; // no change 

    // *p2 = *p2 + 1; // change 

    **p2 = **p2 + 1; // change
}

int main()
{
    /*
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl; // address of i
    cout << p << endl; // addresss of i
    cout << *p2 << endl; // address of i

    cout << &p << endl; // addresss of p
    cout << p2 << endl; // address of p */

    int i = 5;
    int *p = &i;
    int **p2 = &p;    
    
    cout << "before : " << i << endl;
    cout << "before : " << p << endl;
    cout << "before : " << p2 << endl;

    update(p2);
    cout << "after : " << i << endl;
    cout << "after : " << p << endl;
    cout << "after : " << p2 << endl;
    return 0;
}