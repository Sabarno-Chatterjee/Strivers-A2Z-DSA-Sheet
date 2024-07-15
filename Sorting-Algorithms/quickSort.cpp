//Time Complexity: O(NlogN)
//Space Complexity: O(1) Since no temp array is required.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low]; // Choose the first element as the pivot
    int i = low; // Starting index from the left
    int j = high; // Starting index from the right
    
    while (i < j) {
        // Increment i until an element greater than pivot is found
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        
        // Decrement j until an element less than or equal to pivot is found
        while (arr[j] > pivot && j > low) {
            j--;
        }
        
        // If the indices have not crossed, swap the elements
        if (i < j)
            swap(arr[i], arr[j]);
    }
    
    // Place the pivot element in its correct sorted position
    swap(arr[low], arr[j]);
    return j; // Return the partition index
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        qs(arr, low, partitionIndex - 1); // Sort the left half
        qs(arr, partitionIndex + 1, high); // Sort the right half
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    vector<int> arr = {9, 13, 78, 32, 56, 43, 4, 5};
    
    arr = quickSort(arr);
    
    for (auto x : arr)
        cout << x << " ";
    
    return 0;
}
