#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   // freopen("popcorn.in", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> n >> m;
        ll ans = 1;
        ll ans2 = 1;
        for (ll i = n; i >= 1; i--)
        {
            ans *= i;
        }
        for (ll i = m; i >= 1; i--)
        {
            ans2 *= i;
        }

        ll ans3 = (n - m);
        ll ans4 = 1;

        for (ll i = ans3; i >= 1; i--)
        {
            ans4 *= i;
        }

        ll ans5 = ans2 * ans4;

        ll res = ans / ans5;

        cout << res << endl;
    }

    return 0;
}

