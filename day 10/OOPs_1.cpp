#include<iostream>
using namespace std;

class Hero{

    public:
    // properities of class
    int health;
    char level;

    void print(){
        cout << level << endl;
    }

};

int main()
{
    Hero h;

    // cout << "size of object h of class hero is : " << sizeof(h) << endl; // 4
    // cout << "size of object h when the class body is empty is : " << sizeof(h) << endl; // 1

    // as we intiliase the object 
    h.health = 70;
    h.level = 'A';

    // these will print any garbage values
    cout << "Health of hero is : " << h.health << endl; 
    cout << "Level of hero is : " << h.level << endl;

    return 0;
}