#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int n, q;
int up(int arr[], int x) {
  int f = 0, l = n - 1;
  while (l >= f) {
    int mid = (l + f) / 2;
    if (arr[mid] <= x)
      f = mid + 1;
    else
      l = mid - 1;
  }
  if (f >= n) return 0;
  else return arr[f];
}

int down(int arr[], int x) {
  int f = 0, l = n - 1;
  while (l >= f) {
    int mid = (l + f) / 2;
    if (arr[mid] >= x)
      l = mid - 1;
    else
      f = mid + 1;
  }
  if (l < 0) return 0;
  else return arr[l];
}

int main() {
  Fast_IO;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    int UP = up(a, x), DOWN = down(a, x);
    if (DOWN != 0 && UP != 0)
      cout << DOWN << " " << UP << "\n";
    else if (DOWN == 0)
      cout << "X" << " " << UP << "\n";
    else
      cout << DOWN << " " << "X" << "\n";

  }
}
