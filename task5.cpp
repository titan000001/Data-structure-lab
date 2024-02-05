#include<iostream>
using namespace std;

int remove(int arr[], int size, int idx){
    if(idx<0 || idx>=size){
        cout << "Entered index is invalid";
        return 1;
    }

    for (int i = idx - 1; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size -1] = 0;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "The current array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int idx;
    cout << "Enter the index to remove ";
    cin >> idx;
    
    remove(arr, size, idx);

    cout << "The array after removing the index is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}