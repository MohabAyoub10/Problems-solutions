#include <bits/stdc++.h>

#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {

  Fast_IO;
  int n;
  string s;
  deque < char > c;
  cin >> n >> s;
  c.push_back(s[0]);
  for (int i = 1; i < n; i++) {
    if (n % 2 != 0) {
      if (i % 2 == 0) c.push_back(s[i]);
      else c.push_front(s[i]);
    } else {
      if (i % 2 != 0) c.push_back(s[i]);
      else c.push_front(s[i]);
    }

  }
  for (auto x: c) {
    cout << x;
  }
}
