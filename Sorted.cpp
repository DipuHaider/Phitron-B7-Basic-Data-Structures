#include<bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int flag = 0;

        // for(int i = 0; i < N; i++) {
        //     cout << A[i] << " ";
        // }
        
        for(int i = 0; i < N - 1; i++) {
            if(A[i] > A[i + 1]) {
                flag = 1;
                break;
            }
        }
    
        if(flag == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

//input
// 3
// 5
// 2 4 6 7 10
// 8
// 1 100 101 120 120 121 1000 1000
// 4
// 100 1 102 12

//output
// YES
// YES
// NO