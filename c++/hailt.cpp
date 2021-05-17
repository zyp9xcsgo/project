#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y = 0;
        cin >> x;
        for (int j = 0; j < n; j++) {
            if (x == a[j]) {
                cout << "YES" << endl;
                y = 1;
                break;
            }
        }
        if (y != 1) {
            cout << "NO" << endl;
        }
    }
    return 0;
}