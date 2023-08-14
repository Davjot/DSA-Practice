// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][4];

//     // taking input from the user
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // printing the array
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// another way of representing 2d array
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // printing the array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}