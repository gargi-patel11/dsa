#include <iostream>
using namespace std;

void printarr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Corrected Merge Function
void combine(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int b[high - low + 1]; // Temporary array

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        b[k++] = a[i++];
    }

    // Copy remaining elements from right half
    while (j <= high) {
        b[k++] = a[j++];
    }

    // Copy merged elements back to original array
    for (int i = low, k = 0; i <= high; i++, k++) {
        a[i] = b[k];
    }
}

// Corrected Merge Sort Function
void mergsort(int a[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    
    mergsort(a, low, mid);
    mergsort(a, mid + 1, high);
    combine(a, low, mid, high);
}

int main() {
    int a[10], n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Corrected function call
    mergsort(a, 0, n - 1);

    cout << "Sorted array: ";
    printarr(a, n);

    return 0;
}
