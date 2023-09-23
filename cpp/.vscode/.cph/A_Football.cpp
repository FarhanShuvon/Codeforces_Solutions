#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    solve();
}
void solve()
{
    int cnt = 0, c = 1;
    string h;
    cin >> h;
    for (int i = 1; i <= h.length(); i++)
    {
        if (h[i] == h[i + 1])
        {
            cnt = cnt + 1;
            if (cnt == 7)
            {
                cout << "YES" << endl;
                return;
            }
        }
        else
            cnt == 1;
        cout << "NO" << endl;
    }
}