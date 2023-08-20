#include<iostream>
using namespace std;

class Animal{

    public:
        void speak(){
            cout << "Animal speaking" << endl;
        }
};

class Dog : public Animal{

    public:
        void speak(){
            cout << "Animal barking" << endl;
        }
};

int main()
{
    Dog obj;

    obj.speak(); // this will run barking function as we are making an object for the dog class not the animal class
    return 0;
}