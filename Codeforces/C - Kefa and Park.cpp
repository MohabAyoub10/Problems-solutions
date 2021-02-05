#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[100005], ans = 0;
vector<int> adj[100005];
bool visit[100005];

void dfs(int u, int cnt)
{
    visit[u] = 1;
    if (a[u] == 1)
    {
        cnt++;
    }
    else
    {
        cnt = 0;
    }
    if (cnt > m) return;
    if (adj[u].size() <= 1)
    {
        if ((adj[u].size() == 1 && visit[adj[u][0]]) || adj[u].size() == 0)
        {
            ans++;
            return;
        }
    }

    for (int i = 0; i < adj[u].size(); ++i)
    {
        if (!visit[adj[u][i]])
        {
            dfs(adj[u][i], cnt);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    cout << ans << "\n";
}
