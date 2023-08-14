#include<iostream>
using namespace std;

// row - wise sum
void Printsum_row(int arr[][3], int row, int col){
    cout << "Printing the sum of elements row-wise : " << endl;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// col- wise sum
void Printsum_col(int arr[][3], int row, int col){
    cout << "Printing the sum of elements col-wise :  " << endl;
    for(int col = 0; col < 3; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++){
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][3];

    // taking elements input from the user
    cout << "Enter the elements for the row-wise and col-wise sum : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    // printing the array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    Printsum_row(arr, 3, 3); // row wise sum

    Printsum_col(arr, 3, 3); // col wise sum

    return 0;
}