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
 
void addNodeIntoEnd(Node* &start, int elem) {
   Node *current = start;
   if (start == NULL) {
       start = new Node;
       start -> data = elem;
       start -> next = NULL;
   } else {
       Node *current = start;
       while (current -> next != NULL) {
           current = current -> next;
       }
       current -> next = new Node;
       current = current -> next;
       current -> next = NULL;
       current -> data = elem;
   }
}
 
void insert(Node* &curr, int elem) {
   if (curr == NULL) {
       insertStart(curr, elem);
   } else {
       Node *p = new Node;
       p -> data = elem;
       p -> next = curr -> next;
       curr -> next = p;
   }
}
 
void remove(Node* &head, Node *curr) {
   if (curr == head) {
       head = head -> next;
   } else {
       Node *p = head;
       while (p -> next != curr) {
           p = p -> next;
       }
       p -> next = curr -> next;
   }
   delete curr;
}
 
Node* find(Node *head, int elem) {
   Node *curr = head;
   while (curr != NULL && curr -> data != elem) {
       curr = curr -> next;
   }
   return curr;
}
 
Node* findByIndex(Node *head, int index) {
   Node *curr = head;
   for (int i = 1; i < index; i++) {
       if (curr == NULL) {
           return NULL;
       }
       curr = curr -> next;
   }
   return curr;
}
 
int findIndex(Node *head, int elem) {
   Node *curr = head;
   int i = 1;
   while (curr != NULL && curr -> data != elem) {
       curr = curr -> next;
       i++;
   }
   if (curr == NULL)
       return 0;
   return i;
}
 
int Size(Node *head) {
   Node* curr = head;
   int j = 0;
   while(curr != NULL) {
       curr = curr -> next;
       j++;
   }
   return j;
}
 
void delHead(Node* &head ,Node *curr) {
   if (curr == head) {
       delete curr;
   }
}
 
void print(Node *head) {
   Node *curr = head;
   while(curr != NULL) {
       cout << curr -> data << " ";
       curr = curr -> next;
   }
   cout << endl;
}
 
int main() {
   int a, c;
   Node *head = NULL, b , f;
   insertStart(head, 3);
   insert(head, 2);
   insertStart(head, 1);
   print(head);
   insertStart(head, 4);
   print(head);
   Node *curr = find(head, 1);
   insert(curr, 5);
   print(head);
   curr = find(head, 3);
   a = findIndex(head, 4);
   cout << a << endl;
   curr = findByIndex(head, 3);
   cout << (long long) curr << endl;
   c = Size(head);
   cout << c << endl;
   delHead(head, curr);
   print(head);
   remove(head, curr);
   print(head);
   return 0;
}
