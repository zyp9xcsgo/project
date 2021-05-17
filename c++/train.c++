#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

int arr[100];

void index(int arr[], int a, int b, int n) {
    int k = n;
    k++;
    for (int i = k; i >= a; i--) {
        arr[i] = arr[i - 1];
    }
    arr[a - 1] = b;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void search(int arr[], int a, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
            cout << i + 1;
        }
    }
    if (count == 0) {
        cout << "-1";
    }
    cout << endl;
}

int ustgah(int arr[], int n, int a) {

    if (arr[n - 1] == a)
        return (n - 1);
    int k = arr[n - 1], i;
    for (i = n - 2; i >= 0 && arr[i] != a; i--)
    {
        int l = arr[i];
        arr[i] = k;
        k = l;
    }
    if (i < 0)
        return 0;
    arr[i] = k;
    return (n);
}

int main()
{
    int arr[] = { 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    index(arr, 2, 5, n);
    search(arr, 8, n);
    n = ustgah(arr, n, 2);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}