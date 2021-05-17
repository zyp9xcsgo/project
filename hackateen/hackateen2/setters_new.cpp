#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int n, max = 0;
    char id1;
    cin >> n;
    int like[5], arr[n], sum[n], sum1[n];
    char id[5] {'A', 'U', 'G', 'C', 'Z'};
    for (int i = 0; i < 5; i++) {
        cin >> like[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] % like[j] == 0) {
                sum[i] += arr[i];
                sum1[i] = sum[i];
                arr[i] = 0;
            }
        }
    }
    sort(sum, sum + n);
    for (int i = 0; i < n; i++) {
        if (sum[n - 1] == sum1[i]) {
            cout << id[i] << endl;
        }
    }
    return 0;
}
