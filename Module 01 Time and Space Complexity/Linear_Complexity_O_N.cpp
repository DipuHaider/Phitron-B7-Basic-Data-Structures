#include<bits/stdc++.h>
using namespace std;

int main() {

    //Linear Complexity: O(N)

    int N;  //O(1)
    cin >> N;  // O(1)
    
    // for (int i = 1; i <= N; i++) {
    // for (int i = 1; i <= N-5; i++) {
    // for (int i = 1; i <= N+5; i++) {
    // for (int i = 1; i <= N/2; i++) {
    for (int i = 1; i <= N; i+=2) {  // O(N/2) => O(N)
        cout << i << endl; // O(N)
    }

    for (int i = 1; i <= N; i++) {  // O(N)
        cout << i << endl; // O(N)
    }

    return 0;  //O(1)
}