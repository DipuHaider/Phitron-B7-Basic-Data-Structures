#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int flag = 0;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(A[i] == A[j]) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // for(int i = 0; i < N; i++) {
    //     cout << vec[i] << " ";
    // }

    return 0;
}

//input
// 5
// 1 2 3 4 5

//output
// NO

//input
// 6
// 2 1 3 5 2 1

//output
// YES