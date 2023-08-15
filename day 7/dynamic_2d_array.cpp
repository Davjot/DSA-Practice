// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     // creation of 2d array
//     int **arr = new int*[n];

//     for(int i = 0; i < n; i++){
//         arr[i] = new int[n];
//     }

//     // taking input from user
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // printing output
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter the number of rows : " << endl;
    cin >> row;

    cout << "Enter the number of columns : " << endl;
    cin >> col;

    // creation of 2d array
    int **arr = new int*[row];

    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    // taking input from user
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // printing output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing the memory for the above code
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}