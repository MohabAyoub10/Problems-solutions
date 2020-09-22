#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {

  int n, x = 0, y = 0;
  while (true) {
    x = 0;
    y = 0;
    cin >> n;
    if (n == 0) break;

    for (int i = 1; i < 60; i++) {
      for (int j = 1; j < 60; j++) {
        if (abs((i * i * i) - (j * j * j)) == n) {
          x = i;
          y = j;
          break;
        }
      }
      if (x != 0 && y != 0)
        break;
    }
    if (x != 0 && y != 0)
      cout << max(x, y) << " " << min(x, y) << endl;
    else
      cout << "No solution\n";
  }
}
