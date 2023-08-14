#include<iostream>
using namespace std;

char getMaxOccurence(string s){
    int arr[26] = {0};

    // create array of count of characters
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = 0;
        // lowercase
        if((ch >= 'a' && ch <= 'z')){
            number = ch - 'a';
        }
        else{
            // uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
    // find max occurence
    int maximum = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maximum < arr[i]){
            ans = i;
            maximum = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    string s;

    cout << "Enter a string : " << endl;
    cin >> s;

    cout << "Maximum occurence of a character in the string is of : " << getMaxOccurence(s) << endl;
    return 0;
}