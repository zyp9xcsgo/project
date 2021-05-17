#include <iostream>

using namespace std;

int main() {
    unsigned long long t, h, d;
    cin >> t;
    unsigned long long bag[t];
    unsigned long long d2[t];
    for(int i = 0; i < t; i++) {
        cin >> bag[i];
        cin >> d2[i];
    }
    for (int l = 0; l < t; l++) {
        unsigned long long ts = 1, day = 1, bagana = 0;
        bagana = bag[l];
        while(bagana >= ts) {
            if (ts != 1) {
                for (int i = ts; i > 1; --i) {
                    int count = 0;
                    for (int j = 1; j <= i; j++) {
                        if (i % j == 0) {
                            count++;
                        }
                    }
                    if (count == 2) {
                        ts += i;
                        bagana += d2[l];
                        day++;
                        break;
                    }
                }
            } else {
                ts = 2;
                day++;
                bagana += d2[l];
            }
        }
    cout << day << " " << ts << " " << bagana << endl;
    }
    return 0;
}