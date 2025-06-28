#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    vector<long long int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // for(int i = 0; i < N; i++) {
    //     cout << A[i] << " ";
    // }

    int M;
    cin >> M;
    vector<long long int> B(M);
    for(int i = 0; i < M; i++) {
        cin >> B[i];
    }

    // for(int i = 0; i < M; i++) {
    //     cout << B[i] << " ";
    // }
    // cout << endl;

    int X;
    cin >> X;

    A.insert(A.begin() + X, B.begin(), B.end());
    for(int x : A) {
        cout << x << " ";
    }
    
    return 0;
}

//input
// 5
// 2 3 4 5 6
// 3
// 10 20 30
// 3

//output
// 2 3 4 10 20 30 5 6