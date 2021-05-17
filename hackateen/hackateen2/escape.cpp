#include<iostream>

using namespace std;

int main() {
    int h, w, count = 0, count1 = 0;
    cin >> h >> w;
    char arr[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if(arr[i][j] == '#') {
                count++;
            }
            if (arr[i][j] == '$') {
                count1++;
            }
        }
    }
    if (count1 == 2) {
        cout << count - count1 << endl;
    } else {
        if (count / 2 * 2 != count) {
            cout << count / 2 + 1 << endl;
        } else {
            cout << count / 2 << endl;
        }
    }
    return 0;
}