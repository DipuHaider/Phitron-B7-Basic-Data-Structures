#include<bits/stdc++.h>
using namespace std;

int main() {
    
    //assignment operator =
    vector<int> vec1 = {1, 2, 3, 4, 5}; // Initializing a vector with specific values
    vector<int> vec2;
    vec2 = vec1; // Copying vec1 to vec2 using the assignment operator
    // for(int i = 0; i < vec2.size(); i++) {
    //     cout << "Element at index " << i << ": " << vec2[i] << endl; // Output: 1, 2, 3, 4, 5
    // }
    //or
    for(int x : vec2) {
        cout << x << " "; // Output: 1 2 3 4 5
    }   

    //pop_back() function
    vector<int> vec3 = {1, 2, 3, 4, 5};
    vec3.pop_back(); // Removes the last element (5)
    vec3.pop_back(); // Removes the new last element (4)
    cout << "\nAfter pop_back: ";
    for(int x : vec3) {
        cout << x << " "; // Output: 1 2 3 
    }

    //insert() function
    vector<int> vec4 = {1, 2, 3, 4, 5};
    vec4.insert(vec4.begin() + 2, 10); // Inserts 10 at index 2 
    cout << "\nAfter insert: ";
    for(int x : vec4) {
        cout << x << " "; // Output: 1 2 10 3 4 5
    }
    //multiple insertions
    vector<int> vec5 = {100, 200, 300};
    vec4.insert(vec4.begin() + 2, vec5.begin(), vec5.end()); // Inserts all elements of vec5 at the end of vec4
    for(int x : vec4) {
        cout << x << " "; // Output: 1 2 100 200 300 10 3 4 5
    }

    //erase() function
    vector<int> vec6 = {1, 2, 3, 4, 5};
    vec6.erase(vec6.begin() + 2); // Removes the element at index 2 (3)
    cout << "\nAfter erase: ";  
    for(int x : vec6) {
        cout << x << " "; // Output: 1 2 4 5
    }

    //multiple erases
    vector<int> vec7 = {10, 20, 30, 40, 50};
    vec7.erase(vec7.begin() + 1, vec7.begin() + 4); // Removes elements from index 1 to 3 (20, 30, 40)
    cout << "\nAfter multiple erase: ";
    for(int x : vec7) {
        cout << x << " "; // Output: 10 50
    }

    //replace() function
    vector<int> vec8 = {1, 2, 3, 4, 5};
    replace(vec8.begin(), vec8.end(), 3, 99); // Replaces all occurrences of 3 with 99
    cout << "\nAfter replace: ";
    for(int x : vec8) {
        cout << x << " "; // Output: 1 2 99 4 5
    }

    //find() function
    vector<int> vec9 = {10, 20, 30, 40, 50};
    auto it = find(vec9.begin(), vec9.end(), 30); // Finds the first occurrence of 30
    if (it != vec9.end()) {
        cout << "\nElement found: " << *it << endl; // Output: Element found: 30
    } else {
        cout << "\nElement not found" << endl;
    }

    return 0;
}