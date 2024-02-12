#include<iostream>
using namespace std;

    void leftRotate(int arr[], int arrSize, int rotateSize) {
    rotateSize = rotateSize % arrSize;  // Handle cases where rotateSize is greater than arrSize
    reverse(arr, arr + arrSize);
    reverse(arr, arr + rotateSize);      // Reverse the first rotateSize elements
    reverse(arr + rotateSize, arr + arrSize);  // Reverse the remaining elements
             // Reverse the entire array
}


int main(){
    int source[6] = {10,20,30,40,50,60};
    int sourceLength = sizeof(source)/sizeof(source[0]);

    cout << "source : ";
    for (int i = 0; i < sourceLength; i++)
    {
        cout << source[i] << ","; 
    }
    
    int rotateSize;
    cout << endl << "Enter the number of times you want to right rotate the source array : ";
    cin >> rotateSize;

    leftRotate(source, sourceLength, rotateSize);

    cout << "The rotated array is : ";
    for (int i = 0; i < sourceLength; i++)
    {
        cout << source[i] << ",";
    }
    return 0;
}