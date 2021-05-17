#include<iostream>

using namespace std;

int main() {
    int n, y, x, num = 0, count = 0;
    cin >> n;
    int qua[n];
    char ans[n];
    for (int i = 0; i < n; i++) {
        cin >> qua[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == 'G' && qua[i] >= num) {
            num = qua[i] + 1;
        } else if (qua[i] > num){
            
        }
    }
    cout << num << " " << count << endl;
    return 0;
}