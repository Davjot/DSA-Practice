#include<iostream>
using namespace std;

void print(int arr[], int s, int e){

    for(int i = s; i < e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool BinarySearch(int *arr, int s, int e, int k){

    cout << endl;
    print(arr, s, e);
    
    if(s > e){
        return false;
    }

    int mid = s + (e - s)/2;

    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return BinarySearch(arr, mid + 1, e, k);
    }
    else{
        return BinarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    int key = 12;

    bool ans = BinarySearch(arr, 0, 5, key);

    if(ans){
        cout << "Key present" << endl;
    }
    else{
        cout << "Key absent" << endl;
    }
    return 0;
}