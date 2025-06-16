#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int sum = 0;

    // Using for loop to calculate the sum of first N natural numbers
    // for (int i = 1; i <= N; i++) {
    //     sum += i;
    // }
    
    // Using the formula for the sum of the first N natural numbers
    sum = (N * (N + 1)) / 2;

    cout << sum << endl;
    return 0;
}