// this will contain shallow and deep copy and destructor and static keyword

#include<iostream>
using namespace std;

class Hero{

    int health;

    public:
    // properities of class
    char *name;
    char level;
    static int timeTocomplete;

    Hero(){
        cout << "Simple Constructor called!" << endl; // default constructor
        name = new char[100];
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
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;

        cout << "Copy constructor called!" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << "Name : " << this -> name << " , ";
        cout << "Health : " << this -> health << " , ";
        cout << "Level : " << this -> level << endl;
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

    void setname(char name[]){
        strcpy(this -> name, name);
    }

    static int random(){
        return timeTocomplete; // we can only use static word in static function
    }

    // destructor
    ~Hero(){
        cout << "Destructor called!" << endl;
    }

};

int Hero::timeTocomplete = 5;

int main()
{
    cout << Hero::timeTocomplete << endl;

    Hero a;

    cout << a.timeTocomplete << endl;



    // destructor is called automatically when allocated statically but need to remove constructor when allocated dynamically 
    // Hero h; // static

    // Hero *h1 = new Hero();

    // delete h1; // manually deleting dynamic allocation of constructor
//    Hero h;

//    h.sethealth(12);
//    h.setlevel('D');
//    char name[10] = "XYZ"; 

//    h.setname(name);
//    h.print();

//    Hero h1(h);
//    h1.print(); // while running this comment out the dynamic allocated hero copy constructor
//    or
//    Hero h1 = h; 

 // this is shallow copy 
//    h.name[0] = 'A';
//    h.print();

//    h1.print(); 

//    h = h1;

//    h.print();

//    h1.print(); 
    return 0;
}