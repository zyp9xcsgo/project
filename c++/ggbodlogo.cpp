#include <iostream>
#include <algorithm>
using namespace std; 
int main() 
{ 
    string n;
    cin >> n;  
    sort(n.begin(), n.end());
    cout << n << endl;
    return 0; 
}