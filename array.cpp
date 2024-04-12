#include <iostream>

using namespace std;

// Function to swap two integers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    char order;
    cout << "Enter 'A' for ascending order or 'D' for descending order: ";
    cin >> order;

    // Sort the array based on user's choice
    if (order == 'A' || order == 'a') {
        bubbleSort(arr, n, true);
    } else if (order == 'D' || order == 'd') {
        bubbleSort(arr, n, false);
    } else {
        cout << "Invalid choice! Please enter 'A' or 'D'." << endl;
        return 1;
    }

    // Display the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}