#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i = i + 2){
        if(i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[6] = {5, 2, 4, 5, 1, 10};

    int odd[5] = {5, 6, 7, 9, 10};

    cout << "Swapping the alternate numbers in the array with even length" << endl;

    swapAlternate(even, 6);
    printArray(even, 6);

    cout << "Swapping the alternate numbers in the array with odd length " << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}