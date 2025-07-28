#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int ans = linearSearch(arr, n, k);
    if (ans == -1) {
        cout << "element not found" << endl;
    } else {
        cout << "element found at index : " << ans << endl;
    }
}