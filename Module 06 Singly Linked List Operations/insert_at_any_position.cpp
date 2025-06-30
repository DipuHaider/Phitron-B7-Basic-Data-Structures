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

void insert_at_any_position(Node* &head, int index, int value) {
    Node* new_node = new Node(value); // Create a new node

    Node* temp = head;
    for(int i = 1; i < index - 1 && temp != NULL; i++) {
        temp = temp->next; // Move to the node just before the desired position
    }

    new_node->next = temp->next; // Link the new node to the next node
    temp->next = new_node; // Link the previous node to the new node
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

    insert_at_any_position(head, 2, 100); // insert 100 at 2
    insert_at_any_position(head, 3, 200); // insert 200 at 3
    insert_at_any_position(head, 2, 300); // insert 300 at again 2

    print_linked_list(head); // Print the linked list

    return 0;
}