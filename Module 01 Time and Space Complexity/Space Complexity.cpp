#include<bits/stdc++.h>
using namespace std;

int main() {

    //Space Complexity: O(N)
    // This complexity arises when we use additional space that grows with the input size N


    int N;  //O(1)
    cin >> N;  // O(1)
    int arr[N];  // O(N) - space for an array of size N
    for (int i = 0; i < N; i++) {  // O(N)
        cin >> arr[i];  // O(1) for each input
    }

    return 0;  //O(1)
}