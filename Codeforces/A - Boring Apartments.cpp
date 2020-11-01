#include <bits/stdc++.h>
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
  Fast_IO;
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    int x = ((s[0] - '0') * 10) - (10 - (n * (n + 1)) / 2);
    cout << x << endl;
  }
}
