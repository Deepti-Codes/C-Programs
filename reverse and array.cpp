#include <iostream>
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{  int n;
   cout<< "Enter the size of the array: ";
   cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    // Reverse the array using function
    reverseArray(arr, n);

    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}
