#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, AN = 0;
    cin >> n;
    int arr[n];
    map<int, int> M;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        M[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        int x;
        for (int j = 1; j < 32; j++) {
            x = (1 << j);
            if (x <= arr[i]) continue;
            if (M[x - arr[i]]) {
                if (x - arr[i] == arr[i]) {
                    AN += (M[x - arr[i]] - 1);
                } else {
                    AN += M[x - arr[i]];
                }
            }
        }
    }
    cout << AN / 2 << "\n";
}
