#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, sz;
    cin >> n >> m;
    map<int, pair<char, int>> B, S;
    deque<pair<pair<char, int>, int>> D1, D2;
    for (int i = 0; i < n; ++i) {
        char s;
        int a, b;
        cin >> s >> a >> b;
        if (s == 'B') {
            B[a].first = s;
            B[a].second += b;
        } else {
            S[a].first = s;
            S[a].second += b;
        }
    }
    int c = 0;
    for (auto x : S) {
        if (c == m) break;
        D1.push_front({{x.second.first, x.first}, x.second.second});
        c++;
    }
    for (auto x : B) { D2.push_front({{x.second.first, x.first}, x.second.second}); }
    sz = D2.size();
    for (int i = 0; i < D1.size(); ++i) {
        cout << D1[i].first.first << " " << D1[i].first.second << " " << D1[i].second << "\n";
    }
    sz = min(sz, m);
    while (sz--) {
        cout << D2.front().first.first << " " << D2.front().first.second << " " << D2.front().second << "\n";
        D2.pop_front();
    }
}
