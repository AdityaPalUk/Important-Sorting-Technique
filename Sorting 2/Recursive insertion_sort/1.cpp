#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    // base case: when 1 element, it's already sorted
    if (n <= 1) return;

    

    // now insert the nth element (arr[n-1]) into its correct position
    int temp = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > temp) {
        arr[j + 1] = arr[j];  // shift right
        j--;
    }
    arr[j + 1] = temp;  // insert at correct position


    // recursive call to sort first n-1 elements
    insertionSort(arr, n - 1);
}

int main() {
    int arr[] = {2, 3, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "After Sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
