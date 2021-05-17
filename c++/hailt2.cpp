#include<iostream>
#include <algorithm>

using namespace std;

void binary_search(int arr[], int n, int l, int r, int k) {
    int count = 0, l1 = 0, r1 = n;
    for (int i = 0; i < k; i++) {
        while(l1 + 1 < r1) {
        int m = (l1 + r1) / 2;
            if (arr[m] >= l && arr[m] <= r) {
                count++;
                r1 = m;
            } else {
                l1 = m;
            }
        }   
    }
    cout << count << endl;
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
        int l, r;
        cin >> l >> r;
        binary_search(arr, n, l ,r ,m);
    }
}