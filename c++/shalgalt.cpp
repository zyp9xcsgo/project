#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void Erguuleh(Node* &start, int n, int k) {
    Node *current = start;
    for (int i = 0; i < k; i++) {
        while (current -> next != NULL) {
        current = current -> next;
        }
    }
}

int main() {
    Node *head = NULL;
    int n, k, a;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        Erguuleh(head, arr[i], k);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}