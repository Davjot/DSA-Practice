#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    // taking elements input from the user
    cout << "Enter the elements : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    int target;

    cout << "Enter the element which you want to search : " << endl;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element is present in the array " << endl;
    }
    else{
        cout << "Element not found in the array " << endl;
    }

    return 0;
}