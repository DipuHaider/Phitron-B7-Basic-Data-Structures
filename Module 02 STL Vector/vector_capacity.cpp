#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> vec1; // Default initialization
    cout << vec1.capacity() << endl; // Output: 0
    cout << vec1.size() << endl; // Output: 0
    vec1.push_back(10); // Adding an element increases capacity
    cout << vec1.capacity() << endl; // Output: 1
    cout << vec1.size() << endl; // Output: 1
    vec1.push_back(20); // Adding another element may increase capacity
    cout << vec1.capacity() << endl; // Output: 2 (or more, depending on implementation)    
    cout << vec1.size() << endl; // Output: 2
    vec1.push_back(30); // Adding more elements may increase capacity again
    cout << vec1.capacity() << endl; // Output: 4 (or more, depending on implementation)
    cout << vec1.size() << endl; // Output: 3
    vec1.clear(); // Clear the vector, which remove size but all the elements remains
    cout << vec1.size() << endl; // Output: 4 (capacity remains the same after clear)
    cout << vec1[2] << endl; // Output: 30 (last element before clear)

    //empty() function
    if (vec1.empty()) {
        cout << "Vector is empty" << endl; // Output: Vector is empty
    } else {
        cout << "Vector is not empty" << endl;
    }

    //resize() function
    // vec1.push_back(10);
    // vec1.push_back(20);
    // vec1.push_back(30);
    // vec1.resize(5); // Resizing to a larger size, new elements will be default initialized
    // for(int i = 0; i < vec1.size(); i++) {
    //     cout << "Element at index " << i << ": " << vec1[i] << endl; // Output: 0 for new elements
    // }

    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.resize(5, 100); // Resizing to a larger size, new elements will be default initialized
    for(int i = 0; i < vec1.size(); i++) {
        cout << "Element at index " << i << ": " << vec1[i] << endl; // Output: 0 for new elements
    }

    return 0;
}