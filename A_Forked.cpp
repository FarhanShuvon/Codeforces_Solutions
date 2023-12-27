/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Farhan Israk Shuvon
Leading Uninversity,Sylhet
*/
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
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return a * (b / (gcd(a, b)));
}
void solve()
{
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    vector<pair<int, int>> vp;
    vp.pb(mk(kx + a, ky + b));
    vp.pb(mk(kx + a, ky - b));
    vp.pb(mk(kx - a, ky - b));
    vp.pb(mk(kx - a, ky + b));
    vp.pb(mk(kx + b, ky + a));
    vp.pb(mk(kx + b, ky - a));
    vp.pb(mk(kx - b, ky + a));
    vp.pb(mk(kx - b, ky - a));
    set<pair<int, int>> sp;
    for (auto [x, y] : vp)
    {
        if (abs(qx - x) == a && abs(qy - y) == b)
        {
            sp.insert({x, y});
        }
        else if (abs(qx - x) == b && abs(qy - y) == a)
        {
            sp.insert({x, y});
        }
    }
    cout << sp.size() << endl;
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