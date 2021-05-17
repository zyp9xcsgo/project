#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;

int main() {
    long double t, d, num, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        vector<long double> arr;
        d = 0;
        for(int j = 0; j < 10; j++) {
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        d = arr[1] - arr[0]; 
        n = (arr[0] - d) / 2; 
        cout << n << " " << n + d << " " << n + 2 * d << " " << n + 3 * d << " " << n + 4 * d << endl;
    }
    return 0;
}
