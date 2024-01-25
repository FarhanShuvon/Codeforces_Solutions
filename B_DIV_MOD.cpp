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
    int l, r, a;
    cin >> l >> r >> a;
    /* vector<int> v;
    for (int i = l; i <= r; i++)
    {
        int sum = i / a + i % a;
        v.pb(sum);
    }
    int mx = INT_MIN;
    for (auto it : v)
    {
        mx = max(mx, it);
    }
    cout << mx << endl; */
    int ans = r / a + r % a;
    int m = r / a * a - 1;
    if (m >= l)
    {
        ans = max(ans, m / a + m % a);
    }
    cout << ans << endl;
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