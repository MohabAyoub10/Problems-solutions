#include <bits/stdc++.h>

#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
  Fast_IO;
  int n, h, c = 0;
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x <= h) c++;
    else c += 2;
  }
  cout << c << endl;

}
