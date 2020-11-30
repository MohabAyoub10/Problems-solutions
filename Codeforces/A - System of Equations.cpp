#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int main() {
  Fast_IO;
  int n, m, c = 0;
  cin >> n >> m;
  for (int i = 0; i <= max(n, m); i++) {
    for (int j = 0; j <= max(n, m); j++) {
      if (((i * i + j) == n) && ((i + j * j) == m))
        c++;
    }
  }
  cout << c << "\n";
}
