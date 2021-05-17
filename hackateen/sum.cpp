#include <iostream>
#include <math.h>       

using namespace std;

int main() {
    int t;
    unsigned long long sum, multi = 1, multi1 = 1, multi2 = 1;
    cin >> t;
    unsigned long long arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++) {
        unsigned long long c = 0, k = i;
        for (int l = 0; l < t; l++) {
            for (int j = 1; j <= arr[i]; j++) {
                multi *= j;
            }
            for (int g = 1; g <= arr[i] - k; g++) {
                multi1 *= g;
            }
            for (int o = 1; o <= k; o++) {
                multi2 *= o;
            }
            c = multi / (multi1 * multi2);
            if (l == 0) {
                sum = 0;
            } else {
                sum += l * c;
            }
        }
    }
    cout << pow(sum, 2) << endl;
}