#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % j == 0) {
                count++;
                cout << i << " " << count << endl;
            }
        }
        if (count == 2) {
            cout << i << endl;
        }
        count = 0;
    }
    return 0;
}
