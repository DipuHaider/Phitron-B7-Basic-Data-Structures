//Complexity: O(logN) , only if sorted array is given
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int N, Q;
    cin >> N >> Q;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N); // Sorting the array for binary search

    for(int i = 0; i < Q; i++) {
        int value;
        cin >> value;
        int flag = 0;

        int left = 0;
        int right = N - 1;

        while(left <= right) {
            int mid = (left + right) / 2;

            if(arr[mid] == value) {
                flag = 1;
                break;
            } else if(arr[mid] > value) {
                right = mid - 1;

            } else {
                left = mid + 1;
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
