#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec1 = {1, 2, 3, 4, 5}; // Initializing a vector with specific values
    for(auto it = vec1.begin(); it < vec1.end(); it++) {
        cout << *it << " "; // Output: 1 2 3 4 5
    }

    return 0;
}