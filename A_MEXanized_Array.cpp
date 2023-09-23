/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
        Farhan Israk Shuvon
Leading Uninversity,Sylhet*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pop pop_back
#define mk make_pair
//   (__gcd(x, y))
//((x/gcd(x, y))*y)
#define F first
#define S second
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    int k = 0;
    int sum = 0;
    // else
    {
        for (int i = 0; i < b; i++)
        {
            v.pb(i);
            k = i;
        }
        for (int i = k; i < a - 1; i++)
        {
            if (c > b)
                v.pb(c);
            else
                v.pb(b - 1);
        }
        for (int i = 0; i < v.size(); i++)
        {
            sum = sum + v[i];
        }
    }
    if (a < b || c + 1 < b)
        cout << -1 << endl;
    else
        cout << sum << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}