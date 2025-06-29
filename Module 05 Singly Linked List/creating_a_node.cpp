#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value){  // Default constructor
        this->value = value;
        this->next = NULL;
    }
};

int main() {

    // Using constructor
    Node a(10), b(20), c(30); 


    //Without constructor
    // Node a,b,c;
    // a.value = 10;
    // a.next = &b;    
    // b.value = 20;
    // b.next = &c;
    // c.value = 30;
    // c.next = NULL;

    cout << a.value << endl;
    //cout << (*a.next).value << endl; // This will print the value of b or
    cout << a.next->value << endl; // Shortcut, This will print the value of b
    cout << a.next->next->value << endl; //This will print the value of c
    
    return 0;
}