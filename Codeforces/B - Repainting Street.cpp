#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false) ,cin.tie(0) ,cout.tie(0)

int main()
{
    Fast_IO;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, ans =INT_MAX;
        cin >> n >> k;
        int a[n];
        set <int> s;
        for(int i=0 ; i< n ; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        for(auto c : s)
        {
            int cnt = 0;
            for(int i=0 ; i< n; i++)
            {
                if(a[i] != c)
                {

                    i += k-1;
                    cnt++;
                }

            }
            ans = min(ans,cnt);
        }
        cout << ans << "\n";
    }
}
