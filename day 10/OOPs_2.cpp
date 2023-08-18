// now we move health variable to private modifier and will learn how to access it
// and this we can achieve by getter and setter

#include<iostream>
using namespace std;

class Hero{

    int health;

    public:
    // properities of class
    char level;

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
    // Hero h;
    // cout << "hero health is : " << h.gethealth() << endl;

    // using setter 
    // h.sethealth(70);
    // h.level = 'A';

    // these will print any garbage values
    // cout << "Health of hero is : " << h.gethealth() << endl; 
    // cout << "Level of hero is : " << h.level << endl;

    // static allocation
    Hero h;
    h.sethealth(80);
    h.setlevel('A');

    cout << "Health of hero is : " << h.gethealth() << endl; 
    cout << "Level of hero is : " << h.level << endl;

    // dynamic allocation
    Hero *h1 = new Hero;

    h1 -> setlevel('B');
    h1 -> sethealth(70);

    cout << "Health of hero is : " << (*h1).gethealth() << endl; 
    cout << "Level of hero is : " << (*h1).level << endl;

    // or

    cout << "Health of hero is : " << h1 -> gethealth() << endl; 
    cout << "Level of hero is : " << h1 -> level << endl; 

    return 0;
}