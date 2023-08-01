// print the following pattern

//  1 2 3 4 5 5 4 3 2 1
//  1 2 3 4 * * 4 3 2 1
//  1 2 3 * * * * 3 2 1
//  1 2 * * * * * * 2 1
//  1 * * * * * * * * 1

#include <iostream>
using namespace std;
int main() {
    int length;
    cout << "Enter the length of the pattern: ";
    cin >> length;

    int row = 1;
    while (row <= length) {
        int num = 1;
        while (num <= (length - row + 1)) {
            cout << num << " ";
            num++;
        }

        int stars = 1;
        while (stars <= (2 * row - 2)) {
            cout << "* ";
            stars++;
        }

        num = (length - row + 1);
        while (num >= 1) {
            cout << num << " ";
            num--;
        }

        cout << endl;
        row++;
    }

    return 0;
}