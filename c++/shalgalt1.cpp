#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int az (int i, int i1, int j, int n) {
    int max = 0, maxofmax = 1;
    if (i == 1 || i == 3 || i == 9) {
        if (i1 == 1 || i1 == 3 || i1 == 9) {
            max = j;
        }
    } else {
        return;
    }
    if (maxofmax < max && max < n) {
        maxofmax = max;
    }
    return;
}

int main() {
    int n, a, n1, count = 0;
    cin >> n;
    n1 = n;
    int arr[n];
    for (int i = 0; i < n1; i++) {
        if (n1 % 10 != 0) {
            count++;
            n1 /= 10;
        }
    }
    for (int i = n; i > 0; i--) {
        arr[i] = az(i / 10, i % 10, i, n);
    }
    sort(arr, arr + n);
    cout << arr[n - 1];
    return 0;
}