#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s;
    vector <int> ar;
    vector <int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s % 2 == 0) {
            ar.push_back(s);
        } else {
            a.push_back(s);
        }
    }
    sort (ar.begin(), ar.end());
    sort (a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    for (int i = 0; i <= ar.size() - 1; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}