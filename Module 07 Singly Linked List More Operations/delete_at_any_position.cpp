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

void delete_at_any_position(Node* &head, int index) {
    Node* temp = head; // Start from the head node
    for(int i = 1; i < index; i++) {
        temp = temp->next; // Move to the node just before the desired position
    }
    Node* deleteNode = temp->next; // Start from the head node
    temp->next = temp->next->next; // Move the head to the next node
    delete deleteNode; // Delete the old head node
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true) {
        cin >> value; // Read value from input
        if(value == -1){
            break;
        } // Stop reading if -1 is encountered

        insert_at_tail(head, tail, value); // Insert the value at the tail of the linked list
    }
    delete_at_any_position(head, 2); 
    print_linked_list(head); // Print the linked list

    return 0;
}

//input
// 10 20 30 40 -1

//output
// 10
// 20
// 40