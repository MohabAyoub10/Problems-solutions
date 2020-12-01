#include <bits/stdc++.h>

using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int a[100000];
int main() {
  Fast_IO;
  int n;
  cin >> n;
  int p = n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x] = 1;
    while (a[p] == 1) {
      cout << p << " ";
      --p;
    }
    cout << "\n";
  }
}
