#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    pair<int, int> a[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i].first == a[j].second) ans++;
        }
    }
    cout << ans;
}
