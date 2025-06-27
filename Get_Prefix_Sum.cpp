#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    vector<long long int> vec(N);
    for(int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    //     for(int i = 0; i < N; i++) {
    //     cout << vec[i] << " ";
    // }

    vector<long long int> prefix_sum(N + 1);
    prefix_sum[0] = vec[0];
    // cout << prefix_sum[0] << " "; // Output the first element for debugging

    for(int i = 1; i <= N; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + vec[i];
    }   


    //printout prefix sum
    // for(int i = 0; i < N; i++) {
    //     cout << prefix_sum[i] << " ";    
    // }

    //printout in reverse order
    for(int i = N - 1; i >= 0; i--) {    
        cout << prefix_sum[i] << " ";
    }
    
    return 0;
}

//input 
// 5
// 2 4 1 5 3
//output
// 15 12 7 6 2