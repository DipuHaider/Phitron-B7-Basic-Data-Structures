#include<bits/stdc++.h>
using namespace std;

int main() {

    //Linearithmic Complexity: O(N log N)
    // This complexity arises in algorithms that involve a logarithmic operation

    int N;  //O(1)
    cin >> N;  // O(1)

    for (int i = 1; i <= N; i++) {  // O(N)
        for (int j = 1; j <= N; j*=2) {  // O(log N)
            // This inner loop runs log N times for each iteration of the outer loop
            cout << i << " " << j << endl; // O(1)
        }
    }

    return 0;  //O(1)
}