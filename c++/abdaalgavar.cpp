#include<iostream>

using namespace std;

int linear_search(int n, int a[], int val) {
    int index;
    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            index = i;
        } else {
            return -1
        }
    }
    return index;
}

int main() {
    int val, n;
    cin >> n >> val;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << linear_search(n, a, val) + 1 << endl;
}