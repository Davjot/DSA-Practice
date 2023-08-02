// this file contains printing the sum of numbers using while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the value of n : " << endl;
//     cin >> n;

//     int i = 1;
//     int sum = 0; // intiliase the sum variable 

//     while (i <= n)
//     {
//         sum = sum + i;
//         i = i + 1;
//     }
    
//     cout << "value of sum is : " << sum << endl;

//     return 0;
// }

// print the sum of even numbers 
// #include <iostream>
// using namespace std;
// int main() {
//     int upper_limit;
//     cout << "Enter the upper limit: ";
//     cin >> upper_limit;

//     int num = 0;
//     int even_sum = 0;

//     // Use a while loop to iterate through numbers from 0 to the upper limit
//     while (num <= upper_limit) {
//         // Check if the number is even
//         if (num % 2 == 0) {
//             // Add the even number to the sum
//             even_sum += num;
//         }

//         // Move to the next number
//         num++;
//     }

//     // Print the sum of even numbers
//     cout << "Sum of even numbers from 0 to " << upper_limit << ": " << even_sum << endl;

//     return 0;
// }

// print the sum of odd numbers 
// #include <iostream>
// using namespace std;
// int main() {
//     int upper_limit;
//     cout << "Enter the upper limit: ";
//     cin >> upper_limit;

//     int num = 0;
//     int odd_sum = 0;

//     // Use a while loop to iterate through numbers from 0 to the upper limit
//     while (num <= upper_limit) {
//         // Check if the number is even
//         if (num % 2 != 0) {
//             // Add the even number to the sum
//             odd_sum += num;
//         }

//         // Move to the next number
//         num++;
//     }

//     // Print the sum of even numbers
//     cout << "Sum of odd numbers from 0 to " << upper_limit << ": " << odd_sum << endl;

//     return 0;
// }

// program whihc prints the sum of odd and even numbers 
// #include <iostream>
// using namespace std;
// int main() {
//     int upper_limit;
//     cout << "Enter the upper limit: ";
//     cin >> upper_limit;

//     int num = 0;
//     int even_sum = 0;
//     int odd_sum = 0;

//     // Use a while loop to iterate through numbers from 0 to the upper limit
//     while (num <= upper_limit) {
//         // Check if the number is even
//         if (num % 2 == 0) {
//             // Add the even number to the sum of even numbers
//             even_sum += num;
//         } else {
//             // Add the odd number to the sum of odd numbers
//             odd_sum += num;
//         }

//         // Move to the next number
//         num++;
//     }

//     // Print the sum of even and odd numbers
//     cout << "Sum of even numbers from 0 to " << upper_limit << ": " << even_sum << endl;
//     cout << "Sum of odd numbers from 0 to " << upper_limit << ": " << odd_sum << endl;

//     return 0;
// }


// print the sum of prime numbers
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    // Ask the user to enter the upper limit
    int upper_limit;
    cout << "Enter the upper limit: ";
    cin >> upper_limit;

    // Initialize variables
    int num = 0;
    int prime_sum = 0;

    // Use a while loop to iterate through numbers from 0 to the upper limit
    while (num <= upper_limit) {
        // Check if the number is prime
        if (isPrime(num)) {
            // Add the prime number to the sum of prime numbers
            prime_sum += num;
        }

        // Move to the next number
        num++;
    }

    // Print the sum of prime numbers
    cout << "Sum of prime numbers from 0 to " << upper_limit << ": " << prime_sum << endl;

    return 0;
}

