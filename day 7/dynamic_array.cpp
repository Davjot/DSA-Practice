#include<iostream>
using namespace std;

int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n; 

    cout << "Enter the value of n : " << endl;
    cin >> n ;

    // variable size array
    int *arr = new int [n];

    // taking array input from the user
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getsum(arr, n);

    cout << "sum is : " << ans << endl;
    return 0;
}
// this memory is allocated in the heap memory
// to delete this memory alloted in heap, use keyword delete
// int *arr = new int [n];  // this line takes 28 byte of space(20 bytes in heap and 8 in stack; as 4x5 = 20 in heap and 8 byte of int *arr in stack when n =5)