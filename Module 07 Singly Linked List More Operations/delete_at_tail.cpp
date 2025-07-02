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
    Node* new_node = new Node(value);

    if(head == NULL) {
        head = new_node;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_linked_list(Node* head) {
    Node* temp = head; 
    while(temp != NULL) {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void delete_at_tail(Node* &head, Node* &tail,int index) {
    Node* temp = head; // Start from the head node
    for(int i = 1; i < index; i++) {
        temp = temp->next; // Move to the node just before the desired position
    }
    Node* deleteNode = temp->next; // Start from the head node
    temp->next = temp->next->next; // Move the head to the next node
    delete deleteNode; // Delete the old head node
    tail = temp; // Update tail if necessary
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true) {
        cin >> value;
        if(value == -1){
            break;
        }

        insert_at_tail(head, tail, value);
    }
    // cout << "Tail Before Deletion: " << tail->value << endl; // Print the tail value before deletion
    delete_at_tail(head, tail, 3); 
    print_linked_list(head);
    cout << "tail After Deletion: " << tail->value << endl; // Print the tail value to verify deletion

    return 0;
}

//input
// 10 20 30 40 -1

//output
// 10
// 20
// 30