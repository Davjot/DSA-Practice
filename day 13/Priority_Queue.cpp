#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Element at top : " << pq.top() << endl;

    pq.pop();

    cout << "Element at top : " << pq.top() << endl;
    cout << "Size of queue is : " << pq.size() << endl;

    if(pq.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    // min heap
    priority_queue <int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << "Element at top : " << minheap.top() << endl;

    minheap.pop();

    cout << "Element at top : " << minheap.top() << endl;
    cout << "Size of queue is : " << minheap.size() << endl;

    if(minheap.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    return 0;
}