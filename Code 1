#include <bits/stdc++.h>
using namespace std;

int calculateSum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + calculateSum(arr, size - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, n);
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
