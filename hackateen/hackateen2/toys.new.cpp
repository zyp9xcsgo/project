#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, y, x;
    cin >> n >> m;
    char arr[n * m];
    int id[n * m];
    for(int i = 0; i < n * m; i++) {
        cin >> arr[i];
        id[i] = -1;
        if(arr[i] == 'S') {
            y = i;
        }
        if(arr[i] == 'T') {
            id[i] = i;
        }
    }
    sort(id, id + n * m);
    for(int i = 0; i < n * m; i++) {
        if(id[i] != -1) {
            x = id[i];
            break;
        }
    }
    if (x < y) {
        cout << (y - x) * 2 + (id[n * m - 1] - y) * 2 << endl;
    } else {
        cout << (id[n * m - 1] - y) * 2 << endl;
    }
    return 0;
}