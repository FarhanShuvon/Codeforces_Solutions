#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
void solve()
{

    int n, cnt = 0;
    cin >> n;
    string h;
    cin >> h;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[i] == 'U')
            y++;
        else if (h[i] == 'D')
            y--;
        if (h[i] == 'R')
            x++;
        else if (h[i] == 'L')
            x--;
        if (y == 1 && x == 1)
        {
            // cnt++;
            cout << "YES" << endl;
            return;
        }
    }
    // cout<<x<<" "<<y<<endl;
    cout << "NO" << endl;
}
