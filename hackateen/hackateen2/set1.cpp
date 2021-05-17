#include <iostream>

using namespace std;

int main() {
    unsigned long long n, sum = 0, max = 0, a, b;
    cin >> n;
    unsigned long long like[5];
    unsigned long long arr[n];
    for(int i = 0; i < 5; i++) {
        cin >> like[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] % like[i] == 0) {
                sum += arr[j];
                a = i;
                arr[j] = 0;
            }
        }
        if(max < sum) {
            max = sum;
            b = a;
        }
        sum = 0;
    }
    if (max == 0) {
        cout << 'A' << endl;
    }
    if (b == 0) {
        cout << 'A' << endl;
    } else if (b == 1) {
        cout << 'U' << endl;
    } else if (b == 2) {
        cout << 'G' << endl;
    } else if (b == 3) {
        cout << 'C' << endl;
    } else {
        cout << 'Z' << endl;
    }
    return 0;
}