#include <iostream>
#include <algorithm>

using namespace std;

// Function to left rotate an array by rotateSize positions
#include <iostream>
#include <algorithm>

using namespace std;

// Function to left rotate an array by rotateSize positions
void leftRotate(int arr[], int arrSize, int rotateSize) {
    rotateSize = rotateSize % arrSize;  // Handle cases where rotateSize is greater than arrSize

    reverse(arr, arr + rotateSize);      // Reverse the first rotateSize elements
    reverse(arr + rotateSize, arr + arrSize);  // Reverse the remaining elements
    reverse(arr, arr + arrSize);         // Reverse the entire array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int rotateSize;

    cout << "Enter the number of times you want to left rotate the array: ";
    cin >> rotateSize;

    leftRotate(arr, arrSize, rotateSize);

    cout << "The left-بحث rotated array is: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
