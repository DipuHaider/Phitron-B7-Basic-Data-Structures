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

//Using recursion to print the linked list in reverse order
void print_reverse(Node* temp) {
    //base case
    if(temp == NULL) {
        return; // If the list is empty, return
    }
    print_reverse(temp->next); // Recursive call to the next node
    cout << temp->value << endl; // Print the value after returning from the recursive call
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
    print_reverse(head); // Print the linked list

    return 0;
}

//input
// 10 20 30 40 -1

//output
// 40
// 30
// 20
// 10
