#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;

    
        while (arr[j] >current && j>=0 ) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    cout << "Sorted Array:";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
