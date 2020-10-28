#include <bits/stdc++.h>

#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {

  long long int n, v = 0, s = 0;
  cin >> n;
  int arr[1000000];
  for (int i = 0; i < n; i++) {
    int e;
    cin >> e;
    arr[e] = i + 1;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int r;
    cin >> r;
    v += arr[r];
    s += n - arr[r] + 1;
  }

  cout << v << " " << s << endl;
}
