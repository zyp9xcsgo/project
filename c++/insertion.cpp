#include <iostream> 
using namespace std; 

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 0; i < n; i++) {  
        int count = 0;
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];  
            j = j - 1;
            count++;
        }  
        cout << count << " ";
        arr[j + 1] = key;  
    }  
}  

int main()  {  
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }   
    insertionSort(arr, a);
    cout << endl;
    return 0;  
}  
