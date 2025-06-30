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

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* new_node = new Node(value); // Create a new node

    if(head == NULL) { // If the list is empty, make new_node the head
        head = new_node;
        tail = new_node;
        return;
    }
    
    tail->next = new_node; // Link the new node at the end of the list
    // tail = tail->next; // Update tail to point to the new node
    // tail->next = NULL; // Ensure the new tail's next is NULL
    //or
    tail = new_node; // Update tail to point to the new node
    tail->next = NULL; // Ensure the new tail's next is NULL
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
    // Node* b = new Node(30);
    // Node* tail = b;
    //or
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;
    tail->next = NULL;

    insert_at_tail(head, tail, 100); // insert 100 at tail
    insert_at_tail(head, tail, 200); // insert 200 at tail
    insert_at_tail(head, tail, 300); // insert 300 at tail

    print_linked_list(head); // Print the linked list

    cout << "Tail value: " << tail->value << endl; // Print the tail value

    return 0;
}