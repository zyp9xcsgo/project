#include<iostream>
#include <algorithm>

using namespace std;

void binary_search(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l + 1 < r) {
        int m = (l + r) / 2;
        if (arr[m] > x) r = m;
        else l = m;
    }
    if (arr[l] == x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
        
}

int main() {
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;  
        binary_search(arr, n, x);
    }
    return 0;
}