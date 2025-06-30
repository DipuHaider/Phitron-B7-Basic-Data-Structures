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

void insert_at_tail(Node* &head, int value) {
    Node* new_node = new Node(value); // Create a new node

    if(head == NULL) { // If the list is empty, make new_node the head
        head = new_node;
        return;
    }
    
    Node* temp = head; // Start from the head node
    while(temp->next != NULL) {
        temp = temp->next; // Move to the last node
    }
    temp->next = new_node; // Link the new node at the end of the list
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

    insert_at_tail(head, 100); // insert 100 at tail
    insert_at_tail(head, 200); // insert 200 at tail
    insert_at_tail(head, 300); // insert 300 at tail

    print_linked_list(head); // Print the linked list

    return 0;
}