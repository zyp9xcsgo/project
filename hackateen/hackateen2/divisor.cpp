#include<iostream>
#include<cmath>

using namespace std;

int main() {
    unsigned long long n, sum = 0, count = 0;
    cin >> n;
    sum = sqrt(n);
    if (sum * sum == n) {
        cout << "Bazar" << endl;
    } else {
        cout << "Orgio" << endl;
    }
    return 0;
}