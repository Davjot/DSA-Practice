#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    int ans = -1;
    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            //search in right side of the array
            s = mid + 1;
        }
        else{
            //search in left side of the array
            e= mid - 1;
        }
        mid = s+ (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    int ans = -1;
    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            //search in right side of the array
            s = mid + 1;
        }
        else{
            //search in left side of the array
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int odd[5] = {1, 2, 3, 3, 5};

    cout << "First occurence of element 3 is at the index : " << firstOcc(odd, 5, 3) << endl;
    cout << "Last occurence of element 3 is at the index : " << lastOcc(odd, 5, 3) << endl;
    return 0;
}
