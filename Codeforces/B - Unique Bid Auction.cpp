#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int main() {
  Fast_IO;
  int t;
  cin >> t;
  while (t--) {
    int n, fr[300000] = {0}, m = INT_MAX, x = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      fr[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
      if (fr[a[i]] == 1) {
        m = min(m, a[i]);
        if (m == a[i])
          x = i + 1;
      }
    }
    if (x == 0)
      cout << "-1\n";
    else
      cout << x << "\n";
  }
}
