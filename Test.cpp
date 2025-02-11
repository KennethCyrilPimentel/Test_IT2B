#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[2 * MAX_SIZE];
    int size1, size2, mergedSize;

    
    cout << "Enter the number of elements for the first array (up to " << MAX_SIZE << "): ";
    cin >> size1;
    cout << "Enter " << size1 << " elements for the first array:\n";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    
    cout << "Enter the number of elements for the second array (up to " << MAX_SIZE << "): ";
    cin >> size2;
    cout << "Enter " << size2 << " elements for the second array:\n";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    
    mergedSize = size1 + size2;
    for (int i = 0; i < size1; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[size1 + i] = arr2[i];
    }

    
    for (int i = 0; i < mergedSize - 1; ++i) {
        for (int j = 0; j < mergedSize - i - 1; ++j) {
            if (merged[j] < merged[j + 1]) {
                
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

   
    cout << "Merged and sorted array in descending order:\n";
    for (int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}