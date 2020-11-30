#include <bits/stdc++.h>
using namespace std;
#define Fast_IO ios::sync_with_stdio(false) ,cin.tie(0) ,cout.tie(0)
int main()
{
    Fast_IO;
    int n;
    cin >> n;
    if(n%2!=0)
    {
        cout<<"-1\n";
        return 0;
    }
    int a[n];
    for(int i=1 ; i<=n ; i++) a[i-1]=i;

    for(int i=0 ; i<n; i+=2)
        swap(a[i],a[i+1]);

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}
