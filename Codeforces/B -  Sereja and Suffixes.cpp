#include <bits/stdc++.h>
using namespace std;
 int arr[100005], dp[100005], n, b;
bool aray[100001] = {false};
int main() {

 scanf("%d %d" , &n , &b );
  for (int i = 0; i < n; i++)
    scanf("%d" , &arr[i]);

  for (int i = n - 1; i >= 0; i--) {
    if (i == n - 1) {
      dp[i] = 1;
      aray[arr[i]] = true;

    } else {
      if (aray[arr[i]] == true) {
        dp[i] = dp[i + 1];

      } else {
        dp[i] = dp[i + 1] + 1;
        aray[arr[i]] = true;
      }
    }
  }
  for (int i = 0; i < b; i++) {
    int x;
   scanf("%d" , &x);
    printf("%d\n" , dp[x-1]);
  }
}
