#include<iostream>
using namespace std;

int rightRotate(int source[], int sourceLength, int rotateSize){
    int temp[rotateSize];
    for (int i = sourceLength -1; i >=0 ; i--)
    {
        if (i >= sourceLength -rotateSize)
        {
            temp[i - sourceLength + rotateSize] = source[i];
        }
        source[i] = (i < rotateSize) ? temp[i] : source [i - rotateSize];
    }
    
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

    rightRotate(source, sourceLength, rotateSize);

    cout << "The rotated array is : ";
    for (int i = 0; i < sourceLength; i++)
    {
        cout << source[i] << ",";
    }
    return 0;
}