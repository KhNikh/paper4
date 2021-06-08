#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, l, r, min_sum, sum = 0, min_l, min_r;
    cout << "Enter Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n < 2) {
        cout << "Invalid Input"
             << "\n";
        return 0;
    } else {
        sort(arr, arr + n);
        l = 0;
        r = n - 1;
        min_sum = arr[l] + arr[r];
        min_l = l;
        min_r = r;

        while (l < r) {
            sum = arr[l] + arr[r];
            if (abs(sum) < abs(min_sum)) {
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
            if (sum < 0)
                l++;
            else
                r--;
        }

        cout << "The two elements whose sum is minimum are "
             << arr[min_l] <<" and " << arr[min_r];
        return 0;
    }
}