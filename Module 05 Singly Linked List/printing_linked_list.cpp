#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

int main() {

    Node* head = new Node(10); // Create the head node
    Node* a = new Node(20); // Create the second node
    Node* b = new Node(30); // Create the third node
    Node* c = new Node(40); // Create the fourth node


    head->next = a; // Link head to the second node
    a->next = b; // Link the second node to the third node
    b->next = c; // Link the third node to the fourth node
    c->next = NULL; // Last node's next should be NULL

    // cout << head->value << endl; // Print value of head
    // cout << head->next->value << endl; // Print value of the second node
    // cout << head->next->next->value << endl; // Print value of the third node
    // cout << head->next->next->next->value << endl; // Print value of the fourth node

    // while(head != NULL) {
    //     cout << head->value << endl; // Print value of the current node
        
    //     head = head->next; // Move to the next node
    // }

    Node* temp = head; // Start from the head node
    while(temp != NULL) {
        cout << temp->value << endl; // Print value of the current node
        temp = temp->next; // Move to the next node
    }

    //print the linked list again
    temp = head; // Reset temp to head
    while(temp != NULL) {
        cout << temp->value << endl; // Print value of the current node
        temp = temp->next; // Move to the next node
    }

    return 0;
}