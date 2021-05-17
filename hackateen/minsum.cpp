#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> num;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        num.push_back(sum);
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    sort(num.begin(), num.end());
    cout << num[0] << endl;
    return 0;
}