#include<bits/stdc++.h>
using namespace std;

int main() {
    
    //type 01 Time complexity O(1)
    vector<int> vec1; // Default initialization
    // cout << "Size of vec1: " << vec1.size() << endl; // Output: 0

    //type 02 Time complexity O(N)
    vector<int> vec2(5); // Initializes a vector of size 5 with default values (0 for int)
    // cout << "Size of vec2: " << vec2.size() << endl; // Output: 5

    //type 03 Time complexity O(N)
    vector<int> vec3(5, 10); // Initializes a vector of size 5 with all elements set to 10 
    // cout << "Size of vec3: " << vec3.size() << endl; // Output: 5
    // for(int i = 0; i < vec3.size(); i++) {
    //     cout << "Element at index " << i << ": " << vec3[i] << endl; // Output: 10 for all indices
    // }

    //type 04 Time complexity O(N)
    vector<int> vec4 (vec3); // Copy initialization from vec3
    // cout << "Size of vec4: " << vec4.size() << endl; // Output: 5
    // for(int i = 0; i < vec4.size(); i++) {
    //     cout << "Element at index " << i << ": " << vec4[i] << endl; // Output: 10 for all indices
    // }

    //type 05 Time complexity O(N)
    // int arr[] = {1, 2, 3, 4, 5};
    // vector<int> vec5(arr, arr + 5); // Initializes a vector from an array
    //or
    vector<int> vec5 = {1, 2, 3, 4, 5}; // List initialization
    // This is equivalent to the above line, initializing a vector with specific values

    // cout << "Size of vec5: " << vec5.size() << endl; // Output: 5    
    for(int i = 0; i < vec5.size(); i++) {
        cout << "Element at index " << i << ": " << vec5[i] << endl; // Output: 1, 2, 3, 4, 5
    }

    return 0;
}