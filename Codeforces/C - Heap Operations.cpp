#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> MS;
    vector<pair<string, int>> VS;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        bool f = false;
        string s;
        cin >> s;
        if (s == "insert")
        {
            cin >> x;
            MS.insert(x);
            VS.push_back({s, x});
        }
        else if (s == "removeMin")
        {
            if (MS.size() == 0)
            {
                VS.push_back({"insert", 1});
            }
            else
            {
                MS.erase(MS.begin());
            }
            VS.push_back({s, 0});
        }
        else if (s == "getMin")
        {
            cin >> x;
            A:
            if (MS.empty())
            {
                MS.insert(x);
                VS.push_back({"insert", x});
                VS.push_back({s, x});
            }
            else
            {
                if (x == *MS.begin())
                {
                    VS.push_back({s, x});
                }
                else if (*MS.begin() < x)
                {
                    while (MS.size() && *MS.begin() < x)
                        VS.push_back({"removeMin", -1}),
                                     MS.erase(MS.begin());
                    goto A;
                }
                else
                {
                    MS.insert(x);
                    VS.push_back({"insert", x});
                    VS.push_back({s, x});
                }
            }
        }
    }
    cout << VS.size() << "\n";
    for (int i = 0; i < VS.size(); ++i)
    {
        if (VS[i].first != "removeMin")
        {
            cout << VS[i].first << " " << VS[i].second << "\n";
        }
        else
        {
            cout << VS[i].first << "\n";
        }
    }
}
