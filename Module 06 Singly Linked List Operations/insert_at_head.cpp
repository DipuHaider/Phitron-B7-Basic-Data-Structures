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

void insert_at_head(Node* &head, int value) {
    Node* new_node = new Node(value); // Create a new node
    new_node->next = head; // Point the new node's next to the current head
    head = new_node; // Update head to point to the new node
    // Note: This won't change the original head in main, as we are passing by value.
}

void print_linked_list(Node* head) {
    Node* temp = head; // Start from the head node
    while(temp != NULL) {
        cout << temp->value << endl; // Print value of the current node
        temp = temp->next; // Move to the next node
    }
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);


    head->next = a;
    a->next = b;
    b->next = NULL;

    insert_at_head(head, 100); // insert 100 at head
    insert_at_head(head, 200); // insert 200 at head
    insert_at_head(head, 300); // insert 300 at head

    print_linked_list(head); // Print the linked list

    return 0;
}