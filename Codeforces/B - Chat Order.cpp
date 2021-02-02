#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> M;
    vector<string> vs(n);
    for (int i = 0; i < n; ++i) {
        cin >> vs[i];
    }
    for (int i = n - 1; i >= 0; --i) {
        if(!M[vs[i]]){
            cout << vs[i] << "\n";
            M[vs[i]]++;
        }
    }
}
