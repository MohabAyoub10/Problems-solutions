#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a, b, c;
    map<string, string> M;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (!M.count(a)) {
            M[b] = a;
        } else {
            c = M[a];
            M[b] = c;
            M.erase(a);
        }
    }
    cout << M.size() << "\n";
    for (auto Map : M) {
        cout << Map.second << " " << Map.first << "\n";
    }
}
