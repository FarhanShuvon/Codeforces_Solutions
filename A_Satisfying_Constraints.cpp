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
    int l = 0, u = INT_MAX;
    set<int> s;
    while (n--)
    {
        int a, b;

        cin >> a >> b;
        if (a == 1)
            l = max(l, b);
        else if (a == 2)
            u = min(u, b);
        else
            s.insert(b);
    }
    int ans = u - l + 1;
    for (auto it : s)
    {
        if (l <= it && it <= u)
        {
            ans = ans - 1;
        }
    }
    if (ans > 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
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