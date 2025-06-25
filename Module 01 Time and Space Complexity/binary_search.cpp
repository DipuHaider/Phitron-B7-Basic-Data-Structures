#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N, Q;
    cin >> N >> Q;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        int flag = 0;

        for(int i = 0; i < N; i++) {
            if(arr[i] == x) {
                flag = 1;
            }
        }
        if(flag == 1) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}


//input
// 5 3
// 1 5 4 3 2
// 5
// 3
// 6

//output
// found
// found
// not found