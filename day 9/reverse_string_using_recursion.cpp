#include<iostream>
using namespace std;

void reverse(string &s, int i, int j){

    cout << "Call received for string : " << s << endl;

    if(i > j){
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
}

int main()
{
    string name = "abcde";

    cout << endl;

    reverse(name, 0, name.length() - 1);

    cout << endl;

    cout << "String reverse is : " << name << endl;
    return 0;
}