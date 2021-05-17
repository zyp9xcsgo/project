#include<iostream>
#include<vector>

using namespace std;

int main() {
    int ans = 0, n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j++) {
            if (a[i] + a[j] == k) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}