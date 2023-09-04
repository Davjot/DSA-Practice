// this file include the insertion and deletion code in heaps

#include<iostream>
#include<queue>
using namespace std;

class Heap{

    public:
        int arr[100];
        int size;

        Heap(){
            arr[0] = -1;
            size = 0;
        }

        // insertion code
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index / 2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{
                    return ;
                }
            }
        }

        // deletion code
        void deletefromHeap(){
            if(size == 0){
                cout << "nothing to delete" << endl;
                return ;
            }

            // step 1 : put last element in first index
            arr[1] = arr[size];

            // step 2: remove last element
            size--;

            // step 3 : take root node to its position
            int i = 1;
            while(i < size){
                int leftindex = 2 * i;
                int rightindex = 2 * i + 1;

                if(leftindex < size && arr[i] < arr[leftindex]){
                    swap(arr[i], arr[leftindex]);
                    i = leftindex;
                }
                else if(rightindex < size && arr[i] < arr[rightindex]){
                    swap(arr[i], arr[rightindex]);
                    i = rightindex;
                }
                else{
                    return ;
                }
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deletefromHeap();
    h.print();
    return 0;
}