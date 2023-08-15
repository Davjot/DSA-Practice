#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    // start = 0 means it is optional; program can produce output on the value decided by us but if is int start only ; then we need to mention the argument in main function too
    for(int i = start; i < n; i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int size = 5;

    print(arr, size); // here it will print whole array
    cout << endl;
    print(arr, size, 2); // here it is printing after specified index
    return 0;
}