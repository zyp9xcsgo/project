#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, m, a, num = 0, b = 0, count = 0, s;
    cin >> n >> m >> a;
    int arr[20][20], toys[18];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] != 0) {
                toys[num] = arr[i][j];
                num++;
            }
        }
    }
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (toys[i] > toys[j]) {
                s = toys[i];
                toys[i] = toys[j];
                toys[j] = s;
            }
        }
    }
    int i;
    for (i = num; i >= 0; i--) {
        b = toys[i];
        toys[i] = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (b + toys[j] <= a) {
                b += toys[j];
                toys[j] = 0;
            }
        }
        if (b <= a && b != 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}