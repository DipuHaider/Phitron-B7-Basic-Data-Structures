#include<bits/stdc++.h>
using namespace std;

int main() {

    //Logarithmic Complexity: O(log N)

    int N;  //O(1)
    cin >> N;  // O(1)
    
    // for (int i = 1; i <= 2*N; i++) {  // O(N)
    // for (int i = 1; i <= N; i+=2) {  // O(N
    // for (int i = 1; i <= N; i*2) {  // O(log N)
    for (int i = N; i >= 1; i/=3) {  // O(log N)
        cout << i << endl; // O(N)
    }

    return 0;  //O(1)
}