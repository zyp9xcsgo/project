#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, count = 0, argal;
    int num1 = 0, num2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        num1 = 0;
        num2 = 0;
        argal = arr[i];
        for (int j = i; j < n; j++) {
            if (argal > arr[j]) {
                num1 = 1;
            }
        }
        for (int j = i; j >= 0; j--) {
            if (argal < arr[j]) {
                num2 = 1;
            }
        }
        if (num1 == 0 && num2 == 0) {
            count++;
        }
        num1 = 0;
        num2 = 0;
    }
    cout << count << endl;
    return 0;
}