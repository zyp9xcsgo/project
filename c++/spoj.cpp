#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 1, sum = 0, n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
        if (sum != k) {
		    sum = a + b;
		    a = b;
		    b = sum;
        }
	}
	cout << sum << endl;
	return 0;
}