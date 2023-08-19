// this will contain constrcutor's and its types

#include<iostream>
using namespace std;

class Hero{

    int health;

    public:
    // properities of class
    char level;

    Hero(){
        cout << "Simple Constructor called!" << endl; // default constructor
    }

    // parameterised constructor
    Hero(int health){
        cout << "this --> " << this << endl;
        this -> health = health; // this keyword is used for stroing the address of current object in this keyword
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health; // this keyword is used for stroing the address of current object in this keyword
    }

    // copy constructor
    Hero(Hero &temp){
        cout << "Copy constructor called!" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << health << this -> health << endl;
        cout << level << this -> level << endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main()
{
    /*
    // object created statiscally;
    Hero h(10);
    // cout << "Address of h is : " << &h << endl;
    // h.gethealth();
    h.print();

    // object created dynamically
    Hero *h1 = new Hero;
    h1 -> print();
    // or
    // Hero *h1 = new Hero();
    Hero temp(22, 'B');
    temp.print();
    */
   Hero h(70, 'C');
   h.print();

//    copy constructor
    Hero R(h);
    R.print();

    return 0;
}