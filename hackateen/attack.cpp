#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    int arr[n - 1];
    cin >> n;
    for(int j = 0; j < n - 2; j++) {
        cin >> arr[j];
    }
    for(int j = 1; j < n - 3; j += 2) {
        if(arr[j] > arr[j + 1]) {
            sum += arr[j];
        } else {
            sum += arr[j + 1];
            j++;
        }
    }
    cout << sum << endl;
    return 0;
}