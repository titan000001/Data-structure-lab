#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to input array elements
vector<int> inputArray(int size) {
    vector<int> arr(size);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

// Function to count element repetitions
unordered_map<int, int> countRepetitions(const vector<int>& arr) {
    unordered_map<int, int> elementRepetation;
    for (const auto& element : arr) {
        elementRepetation.emplace(element, 0).first->second++;
    }
    return elementRepetation;
}

// Function to check repetition
bool checkRepetition(const unordered_map<int, int>& elementRepetitions) {
    unordered_map<int, int> repetitions;
    for (const auto& repetition : elementRepetitions) {
        if (repetition.second > 1 && ++repetitions[repetition.second] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Input array elements
    vector<int> arr = inputArray(size);

    // Count element repetitions
    unordered_map<int, int> elementRepetation = countRepetitions(arr);

    // Print array
    cout << endl << "Array: ";
    for (const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Check repetition
    if (checkRepetition(elementRepetation)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    cout << endl;
    return 0;
}
