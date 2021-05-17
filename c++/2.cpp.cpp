#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    int count = 0, min = 10000, b = -1;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j >= 0; j--) {
            if(ar[i] == ar[j]) {
                count++;
            }
        }
        if(count == 1) {
            if(min > ar[i]){
                min = ar[i];
                b = i;
            }
        }
        count = 0;
    }
    cout << b + 1 << endl;
    return 0;
}