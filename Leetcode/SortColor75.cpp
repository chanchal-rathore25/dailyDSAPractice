#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

// Function to sort an array of 0s, 1s, and 2s
void sort012(vector<int>& arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    sort012(arr);

    cout << "Sorted Array:   ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}
