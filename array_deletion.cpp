#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Initial array with 5 elements, size of the array is 10
    int size = 5; // Current number of elements in the array
    int pos;

    // Taking input for the position of the element to delete
    cout << "Enter the position (0 to " << size - 1 << ") of the element to delete: ";
    cin >> pos;

    // Input validation
    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shifting elements to the left to fill the gap
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    size--; // Decreasing the size of the array after deletion

   
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
