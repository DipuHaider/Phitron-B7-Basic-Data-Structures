#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int middle = N / 2;

    for(int i = 0; i < middle; i++) {
        for(int j = 0; j < N; j++) {
            if(j == i){
                cout << '\\';
                }
            else if(j == N - 1 - i){
                cout << '/';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    for(int j = 0; j < N; j++) {
        if(j == middle){
            cout << 'X';
        } else {
            cout << ' ';
        } 
    }
    cout << endl;

    for(int i = middle + 1; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(j == N - 1 - i){
                cout << '/';
            } else if(j == i) {
                cout << '\\';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}

//input
//5

//output
// \   /
//  \ /
//   X
//  / \
// /   \