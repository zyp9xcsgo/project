#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, y, x, size = 0;
    cin >> n >> m;
    size = n * m;
    char arr[size];
    int id[size] {-1};
    // for(int i = 0; i < size; i++) {
    //     cin >> arr[i];
    //     if(arr[i] == 'S') {
    //         y = i;
    //     }
    //     if(arr[i] == 'T') {
    //         id[i] = i;
    //     }
    // }
    // sort(id, id + size);
    // for(int i = size; i > 0; i--) {
    //     if(id[i] != -1) {
    //         x = id[i];
    //         break;
    //     }
    //     cout << id[i] << endl;
    // }
    for (int i = 0; i < size; i++) {
        cout << id[i] << endl;
    }
    return 0;
}