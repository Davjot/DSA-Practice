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

int largestRowsum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum = sum + arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];

    // taking elements input from the user
    cout << "Enter the elements for the row-wise sum of elements : " << endl;
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

    int ansindex = largestRowsum(arr, 3, 3);
    cout << "Largest Row index : " << ansindex << endl;

    return 0;
}