#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, policeoff = 0, crimes = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] >= 0) policeoff += a[i];
        else if (a[i] < 0 && policeoff > 0) policeoff--;
        else crimes++;
    }
    cout << crimes;
}
