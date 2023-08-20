// this comes under compile time polymorphism

#include<iostream>
using namespace std;

class A{

    public:
        void sayhello(){
            cout << "Hello" << endl;
        }

        void sayhello(string name){
            cout << "Hello" << endl; // this we cant do as there cant be two names of a function but we can change a little bit and it will work then
        }

        int sayhello(char name){
            cout << "Hello" << endl;
            return 1;
        }
};

int main()
{
    A obj;
    obj.sayhello();
    return 0;
}