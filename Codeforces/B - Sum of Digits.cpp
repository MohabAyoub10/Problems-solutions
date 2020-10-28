#include <bits/stdc++.h>

#define Fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
  Fast_IO;
  string s;
  cin >> s;
  int sum = 0, c = 0;
  if (s[0] != '0'&&s.size()!=1)
    while (true) {
      sum = 0;
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == 0) break;
        sum += s[i] - 48;
      }
      c++;
      s = to_string(sum);
      if (s.size() <= 1) break;
    
    }
  cout << c << endl;

}
