#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
    int n, too = 0, c, b = 0, k = 0, o;
    cin >> n;
    if (n <= 9){
        for(int i = n; i < 0; i--){
            if (i == 1) {
                cout << i << endl;
                return 0;
            }
            if (i == 3) {
                cout << i << endl;
               return 0;
            }
            if (i == 9){
               cout << i << endl;
               return 0;
            }
        }
    }
    for (int i = n; i > 0; i--){
        o = i;
        k = 0;
        b = 0;
            for (int t = 0; t < i; t++){
                c = o % 10;
                if(o > 0){
                    b++;
                } else {
                    break;
                }
                o = o /10;
                if (c == 1){
                    k++;
                }
                if (c == 3){
                    k++;
                }
                if (c == 9){
                   k++;
                }
            }
            if (k == b){
                if (too < i){
                    too = i;
                }
            }
        }
    cout << too << endl;
    return 0;
}