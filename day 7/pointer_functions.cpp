#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    // p = p + 1;
    // cout << "inside p in thsi function : " << p << endl;
    *p = *p + 1;
}

int getsum(int *arr, int n){
    // arr[] is just a pointer or you can represent this as *arr
    cout << endl <<  "Size of : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    // int value = 5;
    // int *p = &value;

    // print(p);
    // cout << "before p : " << p << endl;
    // update(p);
    // cout << "after p : " << p << endl;

    // cout << "before p : " << *p << endl;
    // update(p);
    // cout << "after p : " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    // cout << "sum is : " << getsum(arr, 6) << endl;

    // we can print the sum of last three elements of array 
    cout << "sum is : " << getsum(arr + 3, 3) << endl;
    return 0;
}