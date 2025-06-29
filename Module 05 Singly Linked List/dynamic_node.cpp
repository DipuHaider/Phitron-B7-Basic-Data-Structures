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

    //a.next = &b;
    // (*head).next = a; // Link head to the second node
    head->next = a; // Link head to the second node
    a->next = b; // Link the second node to the third node

    cout << head->value << endl; // Print value of head
    cout << head->next->value << endl; // Print value of the second node

    return 0;
}