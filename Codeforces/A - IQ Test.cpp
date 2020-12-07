#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;


int main() {
  char c[4][4];
  bool flag = false;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> c[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      if (c[i][j] + c[i + 1][j] + c[i][j + 1] + c[i + 1][j + 1] != 162)
        flag = true;
    }
  }
  if (flag)
    puts("YES");
  else
    puts("NO");
}
