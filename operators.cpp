#include<iostream>
using namespace std;
int main()
{
    // Arithmetic Operators
    int add = 30 + 35; // Addition of two numbers 

    double mul = 12.5 * 12.5; // Multiplication of two numbers 

    char D = 'd';
    char A = 'a';
    int diff = D - A; // performing the subtraction operations between two characters 

    float div = 130 / 2; // Divison of two numbers  

    int c = (int) mul; // Type casting the variable b to get a integer variable
    char add_store_in_char = static_cast <char> (add); // type-casting the addition of two characters in form of character only 
    char div_store_in_char = static_cast <char> (div); // type-casting the result of division in form of characters 

    // Addition of two characters and storing the result in double 
    char S = 'd';
    char R = 'a';

    int T = S + R; // type-casted the result of addition of two characters into integer
    double X = S * R; // type-casted the result of multiplciation of two characters into integer
    float Y = S / R; // type-casted the result of division of two characters into integer

    // Printing the results 
    cout << "The value of the variable c is : " << c << endl;
    cout << "The sizeof the variable c is : " << sizeof(c) << endl;

    cout << "The value of the variable diff is : " << diff << endl;
    cout << "The sizeof of the variable diff is : " << sizeof(diff) << endl;

    cout << "The value of the variable div_store_in_char is :  " << div_store_in_char << endl;
    cout << "The sizeof of the variable div_store_char is : " << sizeof(div_store_in_char) << endl;

    cout << "The value of the variable add_store_in_char is : " << add_store_in_char << endl;
    cout << "The sizeof of the variable add_store_in_char is : " << sizeof(add_store_in_char) << endl;

    cout << "The value of the variable T after addition of two characters is : " << T << endl;
    cout << "The sizeof of the variable T after addition of two characters is : " << sizeof(T) << endl;

    cout << "The value of the variable X after multiplication of two characters is : " << X << endl;
    cout << "The sizeof of the variable Y after multiplication of two characters is : " << sizeof(X) << endl;

    cout << "The value of the variable T after division of two characters is : " << Y << endl;
    cout << "The sizeof of the variable T after division of two characters is : " << sizeof(Y) << endl;

    // Relational Operators
    int Q = 23;
    int W = 32;
    int E = 23;

    bool one = (Q == W);
    bool second = (Q == E);
    cout << "Print the variable one : " << one << endl;
    cout << "Print the sizeof variable one : " << sizeof(one) << endl;

    cout << "Print the variable second : " << second << endl;
    cout << "Print the sizeof variable second : " << sizeof(second) << endl;

    bool third = (Q < W);
    bool four = (Q < E);
    cout << "Print the variable third : " << third << endl;
    cout << "Print the sizeof variable one : " << sizeof(third) << endl;

    cout << "Print the variable four : " << four << endl;
    cout << "Print the sizeof variable four : " << sizeof(four) << endl;

    bool five = (Q > W);
    bool six = (Q > E);
    cout << "Print the variable five : " << five << endl;
    cout << "Print the sizeof variable five : " << sizeof(five) << endl;

    cout << "Print the variable six : " << six << endl;
    cout << "Print the sizeof variable six : " << sizeof(six) << endl;

    bool seven = (Q >= W);
    bool eight = (Q >= E);
    cout << "Print the variable seven : " << seven << endl;
    cout << "Print the sizeof variable seven : " << sizeof(seven) << endl;

    cout << "Print the variable eight : " << eight << endl;
    cout << "Print the sizeof variable eight : " << sizeof(eight) << endl;

    bool nine = (Q <= W);
    bool ten = (Q <= E);
    cout << "Print the variable nine : " << nine << endl;
    cout << "Print the sizeof variable nine : " << sizeof(nine) << endl;

    cout << "Print the variable ten : " << ten << endl;
    cout << "Print the sizeof variable ten : " << sizeof(ten) << endl;

    bool eleven = (Q != W);
    bool twelve = (Q != E);
    cout << "Print the variable eleven : " << eleven << endl;
    cout << "Print the sizeof variable eleven : " << sizeof(eleven) << endl;

    cout << "Print the variable twelve : " << twelve << endl;
    cout << "Print the sizeof variable twelve : " << sizeof(twelve) << endl;

    return 0;
}