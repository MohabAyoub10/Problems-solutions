#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> visit;
void dfs(int u) {
    visit[u] = 1;
    for (int i = 0; i < adj[u].size(); ++i) {
        if (!visit[adj[u][i]])
            dfs(adj[u][i]);
    }
}
bool onecom(int n) {
    dfs(0);
    for (int i = 0; i < n; ++i) {
        if (!visit[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    visit = vector<bool>(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (m != n - 1 || !onecom(n)) {
        puts("NO");
    } else {
        puts("YES");
    }
}
