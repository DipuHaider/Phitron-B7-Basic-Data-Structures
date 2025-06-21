#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec1 = {1, 2, 3, 4, 5}; // Initializing a vector with specific values
    cout << "Element at index 0: " << vec1[3] << endl; // Output: 4
    cout << "Element at index 1: " << vec1.at(4) << endl; // Output: 5
    cout << "Element at index 2: " << vec1.front() << endl; // Output: 1    
    cout << "Element at index 3: " << vec1.back() << endl; // Output: 5
    cout << "Element at index 4: " << vec1.data()[2] << endl; // Output: 3 

    return 0;
}