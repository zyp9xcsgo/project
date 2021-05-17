#include <iostream>

using namespace std;

string solve(int img[500][200][3]){
    return "pdwdqdwg";
}

int main(){
    int dots[500][200][3];
    string result;
    for(int i = 0 ; i < 500 ; i++){
        for(int j = 0 ; j < 200 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                scanf("%d",&dots[i][j][k]);
            }
        }
    }
    result = solve(dots);
    cout << result << endl;
    return 0;
}