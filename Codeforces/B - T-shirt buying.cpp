#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    vector<set<int>> v(4);
    int n, m, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < n; i++) {
            cin >> x;
            v[x].insert(a[i]);
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        if (v[x].size() == 0) {
            cout << "-1 ";
        } else {
            int price = *v[x].begin();
            cout << price << " ";
            v[1].erase(*v[1].find(price));
            v[2].erase(*v[2].find(price));
            v[3].erase(*v[3].find(price));
        }
    }
}
