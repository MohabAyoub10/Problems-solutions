#include <bits/stdc++.h>

#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
  Fast_IO;
  int n, t, k, d, o1 = 0, o2, time_without_o2;
  cin >> n >> t >> k >> d;
  time_without_o2 = ((n + k - 1) / k) * t;
  o2 = d;
  for (int i = 0; i < (n + k - 1) / k; i++) {
    if (o1 < o2) o1 += t;
    else o2 += t;
  }
  if (max(o1, o2) < time_without_o2) cout << "YES\n";
  else cout << "NO\n";
}
