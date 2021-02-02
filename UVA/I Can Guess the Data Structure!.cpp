#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
    int n, c, x;
    while (cin >> n && n != EOF) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        bool S = true, Q = true, P = true;
        while (n--) {
            cin >> c >> x;
            if (c == 1) {
                if (S)
                    s.push(x);
                if (Q)
                    q.push(x);
                if (P)
                    pq.push(x);
            } else {
                if (S) {
                    if (s.empty() || x != s.top()) {
                        S = false;
                    } else {
                        s.pop();
                    }
                }
                if (Q) {
                    if (q.empty() || x != q.front()) {
                        Q = false;
                    } else {
                        q.pop();
                    }
                }
                if (P) {
                    if (pq.empty() || x != pq.top()) {
                        P = false;
                    } else {
                        pq.pop();
                    }
                }
            }
        }
        if (!S && !Q && !P) {
            puts("impossible");
        } else if (S && !Q && !P) {
            puts("stack");
        } else if (Q && !S && !P) {
            puts("queue");
        } else if (P && !S && !Q) {
            puts("priority queue");
        } else {
            puts("not sure");
        }
    }
}
