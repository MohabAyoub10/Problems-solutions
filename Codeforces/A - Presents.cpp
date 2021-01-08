#include <bits/stdc++.h>
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
  Fast_IO;
  int n; cin >> n;
  int arr[n];
  map < int, int > M; vector < int > v;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    M.insert({arr[i], i + 1});
  }
  for (int i = 1; i <= n; i++) {
    v.push_back(M[i]);
  }

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

}
