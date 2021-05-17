#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, count = 0, count1 = 0;
    cin >> n;
    int arr[n], num[n], num1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        num[i] = arr[i];
        num1[i] = arr[i];
    }
    sort(num, num+n);
    sort(num1, num1+n, greater<int>());
    for(int i = 0; i < n; i++) {    
        if(arr[i] == num[i]) {   
            count++;                
        } else if(arr[i] == num1[i]) {
            count++; 
        }                           
    }
    if (count == n) {
        cout << "Eremblegdsen" << endl;
    } else {
        cout << "Eremblegdeegui" << endl;
    }                                                                  
    return 0;
}