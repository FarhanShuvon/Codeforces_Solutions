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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb(mk(a, b));
    }
    int ans = 0;
    vector<int> v1;
    for (auto it : v)
    {
        if (it.second > k)
        {
            ans = it.first - (it.second - k);
        }
        else
        {
            ans = it.first;
        }
        v1.pb(ans);
    }
    int m = INT_MIN;
    for (auto it : v1)
    {
        // cout<<it<<endl;
        m = max(m, it);
    }
    cout << m << endl;
    // cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}