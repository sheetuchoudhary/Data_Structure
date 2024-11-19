#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50}; // Initial array 
    int size = 5; // Current number of elements in the array
    int pos, newElement;

    // Taking input for the new element to insert
    cout << "Enter the new element to insert: ";
    cin >> newElement;

    // Taking input for the position where the new element should be inserted
    cout << "Enter position (0 to " << size << ") to insert the new element: ";
    cin >> pos;

    // Input validation
    if (pos < 0 || pos > size) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shifting elements to the right to make space for the new element
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting the new element at the specified position
    arr[pos] = newElement;
    size++; // Incrementing the size after insertion

    // Printing the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
