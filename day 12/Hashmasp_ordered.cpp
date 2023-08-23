// this is the unordered map file 

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    map <string, int> m;

    // insertion
    // First way
    pair <string, int> pair1 = make_pair("Hello", 3);
    // this make pair is breaked down as Hello is the key and 3 is the value; meaning hello key will have value stored as 3
    m.insert(pair1);

    // second way
    pair <string, int> pair2("hi", 2);
    m.insert(pair2);

    // Third way
    m["hey"] = 1;

    // what will happen
    m["hey"] = 2;
    // the answer is that hey key will gets its value updated to 2 after running this

    // searching in hash map
    cout << m["hey"] << endl;
    cout << m.at("Hello") << endl; // prints the value of the key pair that is 3

    // cout << m.at("unknownkey") << endl; // this will give error as there is no key value pair stored inside the map
    cout << m["unknownkey"] << endl;
    cout << m.at("unknownkey") << endl; // this will give answer 0 now as now some insertion/entry is made inside the map

    // size of the map
    cout << m.size() << endl; // this will give size of 4 as four key value pairs are there

    // check presence of the key
    cout << m.count("hey") << endl;

    // erase the key value pair
    m.erase("hey");
    cout << m.size() << endl; // now the size has been changed to 3 after deletion of the key

    // this loop means it will automatically iterate to the end condition
    // for(auto i:m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // iterator
    map <string, int> :: iterator it = m.begin(); // begin will print the start value and end will print the last value

    while(it != m.end()){
        cout << it -> first << " " << it -> second << endl;
        it++;
    }

    return 0;
}