#include<iostream>
#include<cmath>

using namespace std;
 
int main() {
    int n, k, n1, pow1, num;
    cin >> n >> k;
    int arr[n], unen[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cin >> unen[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 10 == arr[i] / 10) {
            if (unen[i] == 1) {
                num = arr[i];
            }
        }
    }
    cout << num << endl;
    return 0;
}