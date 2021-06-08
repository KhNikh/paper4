#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cout << "Enter Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= n * 2) {
            cout << i << " " ;
        }
    }
    cout << "\n";
    return 0;
}