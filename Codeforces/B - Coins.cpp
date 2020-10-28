#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[3] = {
    0
  };
  char b[3];
  string s;
  for (int i = 0; i < 3; i++) {
    cin >> s;
    if (s[1] == '>') {
      if (s[0] == 'A')
        a[0]++;
      else if (s[0] == 'B')
        a[1]++;
      else
        a[2]++;
    } else {
      if (s[2] == 'A')
        a[0]++;
      else if (s[2] == 'B')
        a[1]++;
      else
        a[2]++;
    }
  }
  if (a[0] == 0) b[0] = 'A';
  if (a[0] == 1) b[1] = 'A';
  if (a[0] == 2) b[2] = 'A';
  if (a[1] == 0) b[0] = 'B';
  if (a[1] == 1) b[1] = 'B';
  if (a[1] == 2) b[2] = 'B';
  if (a[2] == 0) b[0] = 'C';
  if (a[2] == 1) b[1] = 'C';
  if (a[2] == 2) b[2] = 'C';
  sort(a, a + 3);
  if (a[0] == 0 && a[1] == 1 && a[2] == 2)
    cout << b[0] << b[1] << b[2] << endl;
  else
    cout << "Impossible\n";
}
