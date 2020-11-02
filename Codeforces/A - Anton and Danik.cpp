#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, a=0, d=0;
    cin >> n;
    char games[n];
    for (int i = 0; i < n; i++)
    {
        cin >> games[i];
        if (games[i] == 'A')
            a++;
        else
            d++;
    }
    if (a == d)
        cout << "Friendship\n";
    else if (a > d)
        cout << "Anton\n";
    else
        cout << "Danik\n";

}
