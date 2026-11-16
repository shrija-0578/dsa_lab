#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int low, int high) {
    int pivot = ar[low];
    int p = low + 1;
    int q = high;

    while (true) {
        while (p <= high && ar[p] <= pivot) {
            p++;
        }
        while (q >= low && ar[q] > pivot) {
            q--;
        }
        
        if (p >= q) {
            break;
        }
        
        swap(ar[p], ar[q]);
    }
    
    swap(ar[low], ar[q]);
    return q;
}

void quickSort(int ar[], int low, int high) {
    if (low < high) {
        int pi = partition(ar, low, high);
        quickSort(ar, low, pi - 1);
        quickSort(ar, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    quickSort(ar, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}
