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
    int n;
    cin >> n;
    int a, b;
    vector<int> v;
    vector<int> v1;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.pb(a);
        v1.pb(b);
        ans.pb(mk(a, b));
    }
    int poly = v[0];
    sort(v.begin(), v.end());
    int as = -1;
    int trac = 0;
    if (v.size() > 2)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (poly == v[i])
            {
                trac = v[i - 1];
            }
        }
    }
    int t = 0;
    int j = 0;
    int x = 0, y = 0;
    sort(ans.begin(), ans.end());
    if (v.size() <= 2)
    {
        if (v1[0] <= v1[1])
            as = -1;
    }
    else
    {
        as = trac + 1;
    }
    cout << as << endl;
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