#include<iostream>
#include<vector>

using namespace std;

vector<int> vec;

int zagnuulah(int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 1; j <= n; j++) {
            if (vec[i] == j) {
                return count;
            } else {
                count++;
                vec.pop_back();
            }
        }
    }
}

int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a; 
        vec.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int x = zagnuulah(n);
        cout << x << endl;
    }
    return 0;
}