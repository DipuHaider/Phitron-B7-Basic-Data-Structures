#include<bits/stdc++.h>
using namespace std;

int main() {

    //Quadratic Complexity: O(N^2) or O(N*N)    
    // This complexity arises when we have two nested loops, each iterating N times

    int N;  //O(1)
    cin >> N;  // O(1)

    for (int i = 1; i <= N; i++) {  // O(N)
        for (int j = 1; j <= N; j++) {  // O(N)
            cout << i << " " << j << endl; // O(1)
        }
    }

    return 0;  //O(1)
}