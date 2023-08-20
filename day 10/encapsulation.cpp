#include<iostream>
using namespace std;

class Student{
    
    private:
        string name;
        int age;
        int height;
    
    public:
        int getage(){
            return this -> age;
        }
};

int main()
{
    Student first;

    cout << "Everything is working fine!" << endl;

    cout << "This is called Encapsulation, creating private modifier and then accessing it from public modifier" << endl;
    return 0;
}