#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005], b[1005], ans = 0;
bool max_cookies(int x) {

  int magic_pow = k;
   for (int i = 0; i < n; i++) {
    if ((a[i] * x) > b[i])
      magic_pow -= ((x * a[i]) - b[i]);
  }

  if (magic_pow < 0)
    return false;
  else
    return true;
}
int main() {

  cin >> n >> k;
   for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

  for (int i = 1; i < 2005; i++) {
    if (!max_cookies(i)) {
      ans = i - 1;
      break;
    }
  }
  cout << ans << endl;
}
