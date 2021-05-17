#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n, favA, favU, favG, favC, favZ;

    cin >> n;
    cin >> favA >> favU >> favG >> favC >> favZ;

    vector<pair<long long, char> > sums;

    for(int i = 0; i < 5; i++){
        if(i == 0){
            sums.push_back(make_pair(0, 'A'));
        } else if(i == 1){
            sums.push_back(make_pair(0, 'U'));
        } else if(i == 2){
            sums.push_back(make_pair(0, 'G'));
        } else if(i == 3){
            sums.push_back(make_pair(0, 'C'));
        } else {
            sums.push_back(make_pair(0, 'Z'));
        }
    }

    for(int i = 0; i < n; i++){
        long long num;
        cin >> num;
        if(num % favA == 0)
            sums[0].first += num;
        if(num % favU == 0 && num % favA != 0)
            sums[1].first += num;
        if(num % favG == 0 && num % favU != 0 && num % favA != 0)
            sums[2].first += num;
        if(num % favC == 0 && num % favG != 0 && num % favU != 0 && num % favA != 0)
            sums[3].first += num;
        if(num % favZ == 0 && num % favC != 0 && num % favG != 0 && num % favU != 0 && num % favA != 0)
            sums[4].first += num;
    }

    sort(sums.begin(), sums.end());

    cout << sums[4].second << endl;

    return 0;
}
