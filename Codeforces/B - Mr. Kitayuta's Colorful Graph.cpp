#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool visit[105];
vector<int> adj[105][105];
int n, m, u, v, c, q, ans = 0;
bool flag = false;

void dfs(int u, int v, int c) {
    visit[u] = 1;
    if (u == v) {
        flag = true;
    }
    for (int i = 0; i < adj[c][u].size(); ++i) {
        if (!visit[adj[c][u][i]]) {
            dfs(adj[c][u][i], v, c);
        }
    }
}

int main() {

    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v >> c;
        adj[c][u].push_back(v);
        adj[c][v].push_back(u);
    }
    cin >> q;
    while (q--) {
        ans = 0;
        cin >> u >> v;
        for (int i = 1; i <= m; ++i) {
            dfs(u, v, i);
            if (flag) {
                ans++;
                flag = false;
            }
            memset(visit, 0, sizeof visit);
        }
        cout << ans << "\n";
    }
}
