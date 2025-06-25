#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N, Q;
    cin >> N >> Q;
    vector<long long int> vec(N + 1);
    for(int i = 1; i <= N; i++) {
        cin >> vec[i];
    }

    vector<long long int> prefix_sum(N + 1);
    prefix_sum[1] = vec[1];

    for(int i = 2; i <= N; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + vec[i];
    }   

    while(Q--) {
        int L, R;
        cin >> L >> R;
        long long int sum;
        if(L == 1) {
            sum = prefix_sum[R];
        } else {
            sum = prefix_sum[R] - prefix_sum[L - 1];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}

//input 
// 6 3
// 6 4 2 7 2 7
// 1 3
// 3 6
// 1 6
//output
// 12
// 18
// 28