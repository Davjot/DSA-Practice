#include<iostream>
using namespace std;

void ReachHome(int src, int dest){
    
    cout << "Source : " << src << " Destination : " << dest << endl;

    if(src == dest){
        cout << "Reached!" << endl;
        return;
    }

    src++;

    ReachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    cout << endl;

    ReachHome(src, dest);
    return 0;
}