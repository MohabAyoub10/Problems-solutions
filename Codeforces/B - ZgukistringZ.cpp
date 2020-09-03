    #include <bits/stdc++.h>
    using namespace std;
    int main() {
      string a, b, c;
      cin >> a >> b >> c;
       int A[26] = {0}, B[26] = {0}, C[26] = {0};
      int BA = INT_MAX, CA = INT_MAX;

      for (int i = 0; i < a.size(); i++) A[a[i] - 'a']++;
      for (int i = 0; i < b.size(); i++) B[b[i] - 'a']++;
      for (int i = 0; i < c.size(); i++) C[c[i] - 'a']++;

      for (int i = 0; i < b.size(); i++)
        BA = min((A[b[i] - 'a'] / B[b[i] - 'a']), BA);

      for (int i = 0; i < c.size(); i++)
        CA = min((A[c[i] - 'a'] / C[c[i] - 'a']), CA);

      while (BA > 0 || CA > 0) {
        if (BA > CA) {

          for (int i = 0; i < b.size(); i++) {
            cout << b[i];
            A[b[i] - 'a']--;
          }
        } else {
          for (int i = 0; i < c.size(); i++) {
            cout << c[i];
            A[c[i] - 'a']--;
          }
        }
        for (int i = 0; i < b.size(); i++)
          BA = min((A[b[i] - 'a'] / B[b[i] - 'a']), BA);

        for (int i = 0; i < c.size(); i++)
          CA = min((A[c[i] - 'a'] / C[c[i] - 'a']), CA);
      }

      for (int i = 0; i < 26; i++) {
        while (A[i]--) {
          cout << char(i + 'a');
        }
      }
    }
