#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long m;
    cin >> m;

    vector<long long> opemi;
    long long a;

    for(int i = 0; i < m; i++){
        cin>>a;
        opemi.push_back(a);
    }
    vector<long long> mufasa;
    for(int i = 0; i < m; i++){

        mufasa.push_back(opemi[i] - ( i + 1 ));


    }

    bool sorted = false;
    long long turns = 1;
    while(!sorted){
        for(int i = 0; i < m; i++){
            opemi[i] += mufasa[opemi[i] - 1];
        }


        if(opemi[0] == 1){
            if(is_sorted(opemi.begin(), opemi.end())){
                sorted = true;
            }
        }

        turns++;
    }
    cout<< turns <<endl;

}