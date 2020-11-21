#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define lli long long int
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
      bool f = true;
      int l, r;
      cin >> l >> r;
      l--; r--;
      for (int j = 0; j < l; j++) {
        if (s[j] == s[l]) {
          f = false;
          break;
        }
      }
      for (int j = r + 1; j < n; j++) {
        if (s[j] == s[r]) {
          f = false;
          break;
        }
      }
      cout << (f ? "NO" : "YES") << '\n';
    }
  }
}
