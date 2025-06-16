#include<bits/stdc++.h>
using namespace std;

int main() {

    //sqrt Complexity: O(sqrt(N))

    int N;  //O(1)
    cin >> N;  // O(1)

    for (int i = 1; i <= sqrt(N); i++) {  // O(sqrt(N))
        if(N%i == 0) {  // O(1)
            cout << i << endl;  // O(1)
        }
    }

    return 0;  //O(1)
}