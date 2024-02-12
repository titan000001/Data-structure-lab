#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int shiftSize;

    cout << "the current array is: " ;
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << "How many indices do you want to right shift?" << endl;
    cin >> shiftSize;
    
    // Perform right shift
    for (int i = size - 1; i >= shiftSize; i--)
    {
        arr[i] = arr[i - shiftSize];
    }

    // Set the first elements to 0
    for (int i = 0; i < shiftSize; i++)
    {
        arr[i] = 0;
    }

    cout << "The shifted array is: " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
