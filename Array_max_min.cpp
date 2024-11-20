
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, 21, 7, 10, 44, 25, 3};
    int size = 7; 
    int num;
    int mid;
    int r_index = -1;

    // Sorting the array using Bubble Sort
    for (int f = 0; f < size - 1; f++) {
        for (int s = 0; s < size - f - 1; s++) {
            if (arr[s] > arr[s + 1]) {
                int temp = arr[s];
                arr[s] = arr[s + 1];
                arr[s + 1] = temp;
            }
        }
    }

    // Display the sorted array
    cout << "The sorted array is: ";
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;


    cout << "Number to search: ";
    cin >> num;

    int low = 0, high = size - 1;
    

    while (low <= high)// terminate condition
    {
        mid = low + (((high - low) *(num - arr[low]))/ arr[high]-arr[low]); // terminate condition

        if (arr[mid] == num) 
        {
            r_index = mid;
            break;
        } else if (arr[mid] < num) 
        {
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }

    if (r_index != -1)
        cout << "Element found at index " << r_index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
