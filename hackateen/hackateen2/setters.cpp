#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n, a, b, c, d, e;
    cin >> n;
    cin >> a >> b >> c >> d >> e;
    vector<pair<unsigned long long, char>> sum;
    for(int i = 0; i < 5; i++){
        if (i == 0) {
            sum.push_back(make_pair(0, 'A'));
        } else {
            if(i == 1) {
                sum.push_back(make_pair(0, 'U'));
            } else {
                if(i == 2) {
                    sum.push_back(make_pair(0, 'G'));
                } else {
                    if(i == 3) { 
                        sum.push_back(make_pair(0, 'C'));
                    } else {
                        sum.push_back(make_pair(0, 'Z'));
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        unsigned long long too;
        cin >> too;
        if(too % a == 0)
            sum[0].first += too;
        if(too % b == 0 && too % a != 0)
            sum[1].first += too;
        if(too % c == 0 && too % b != 0 && too % a != 0)
            sum[2].first += too;
        if(too % d == 0 && too % c != 0 && too % b != 0 && too % a != 0)
            sum[3].first += too;
        if(too % e == 0 && too % d != 0 && too % c != 0 && too % b != 0 && too % a != 0)
            sum[4].first += too;
    }
    sort(sum.begin(), sum.end());
    cout << sum[4].second << endl;
    return 0;
}
