#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, Spoints = 0, Dpoints = 0;
    cin >> n;
    deque<int> card;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        card.push_back(x);
    }
    for (int i = 0; !card.empty(); ++i)
    {
        if (i % 2 == 0)
            Spoints += max(card.front(), card.back());
        else
            Dpoints += max(card.front(), card.back());
        if (card.front() > card.back())card.pop_front();
        else card.pop_back();
    }
    cout << Spoints << " " << Dpoints;
}
