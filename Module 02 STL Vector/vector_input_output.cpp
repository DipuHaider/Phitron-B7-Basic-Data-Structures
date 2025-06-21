#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    //vector<int> vec(N); // Initialize a vector of size N
    // for(int i = 0; i < N; i++) {
    //     cin >> vec[i]; // Input elements into the vector
    // }
    //if no N then
    vector<int> vec;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x; // Input each element
        vec.push_back(x); // Assign the input value to the vector
    }

    for(int i = 0; i < N; i++) {
        cout << vec[i] << " "; // Output the elements of the vector
    }

    // Alternatively, you can use a range-based for loop

    return 0;
}

// //input 
// 5
// 10 20 30 40 50