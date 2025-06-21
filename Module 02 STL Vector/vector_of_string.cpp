#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    // vector<string> vec(N); // Initialize a vector of strings
    // for(int i = 0; i < N; i++) {
    //     cin >> vec[i]; // Input elements into the vector
    // }

    //if name has space then
    vector<string> vec(N); // Initialize an empty vector of strings
    cin.ignore(); // Ignore the newline character after reading N
    for(int i = 0; i < N; i++) {
        getline(cin, vec[i]); // Input each line as a string
    }

    for(string s : vec) {
        cout << s << " " << endl; // Output the elements of the vector
    }


    return 0;
}

//input  

// 5
// Rakib khan
// Sakib
// Akib
// Rifat
// Sifat