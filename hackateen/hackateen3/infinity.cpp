#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    vector<unsigned long long> vec;
    unsigned long long num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    vector<unsigned long long> vec1;
    for (int i = 0; i < n; i++) {
        vec1.push_back(vec[i] - ( i + 1 ));
    }
    bool sorted = false;
    unsigned long long count = 1;
    while (!sorted) {
        for (int i = 0; i < n; i++) {
            vec[i] += vec1[vec[i] - 1];
        }
        if (vec[0] == 1) {
            if(is_sorted(vec.begin(), vec.end())){
                sorted = true;
            }
        }
        count++;
    }
    cout<< count <<endl;
    return 0;
}
