#include <iostream>
using namespace std;

void insertion(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Insert elements of array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion(arr, n);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
