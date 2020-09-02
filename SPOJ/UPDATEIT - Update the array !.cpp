#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, q;
  cin >> t;

  while (t--) {

    cin >> n >> q;
    long long int cum[n] = {0};

    for (int i = 0; i < q; i++) {
      int l, r, val;
      cin >> l >> r >> val;
      cum[l] += val;
      cum[r + 1] -= val;
    }
    for (int i = 0; i <= n; i++) {
      if (i > 0)
        cum[i] += cum[i - 1];
    }

    int nx;
    cin >> nx;
    for (int i = 0; i < nx; i++) {
      int x;
      cin >> x;
      cout << cum[x] << endl;
    }

  }

}
