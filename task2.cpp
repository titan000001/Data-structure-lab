#include<iostream>
using namespace std;
int rightShift(int source[] , int arrLength, int shiftSize){
    if (shiftSize >> arrLength)
    {
        cout << "The shifting value is more than the length of source: ";
        return 1;
    }
    for (int i = arrLength -1 ; i >= 0 ; i--){
        source[i] = (i - shiftSize >= 0) ? source[i - shiftSize] : 0;
    }   
}

int main(){
    int source[]={10,20,30,40,50,60};
    int arrLength;
    arrLength = sizeof(source)/sizeof(source[0]);

    cout << "The current array is: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << source[i] << ",";
    }
    
    int shiftSize = 1;
    cout << endl << "How many cells you want to shift? : ";
    cin >> shiftSize;

    rightShift(source, arrLength, shiftSize);

    cout << "The shifted array is: " ;
    for (int i = 0; i < arrLength; i++)
    {
        cout << source[i] << ",";
    }
    return 0;
}