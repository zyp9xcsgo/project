#include <iostream>

using namespace std;


struct Node {
    int data;
    Node *next;
};


void insertStart(Node* &head, int elem) {
    Node *p = new Node;
    p -> data = elem;
    p -> next = head;
    head = p;
}


void print(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

void insertEnd(Node* &head, int elem) {
    if (head == NULL) {
        insertStart(head, elem);
    } else {
        Node *last = new Node;
        Node *start = head; 
        while(start -> next != NULL){
            start = start -> next;
        }
        start -> next = last;
        last -> data = elem;
        last -> next = NULL;
    }
}

void removeAllByValue(Node* &head, int elem) {
    Node *tmp = head;
    while (head->data == elem) {
        head = head->next;
    }
    while (tmp -> next != NULL) {
        if (tmp -> next -> data == elem) {
            tmp -> next = tmp -> next-> next;
        } else {
            tmp = tmp -> next;
        }
    }
}


int main() {

    Node *head = NULL;
    int n, m, r;
    int a[100], b[100];
    

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
        insertStart(head, a[i]);
    print(head);
    

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        insertEnd(head, b[i]);
    }
    print(head);
    

    cin >> r;
    removeAllByValue(head, r);
    print(head);
    return 0;
}