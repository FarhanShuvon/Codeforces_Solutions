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
    int u = 0, r = 0, d = 0, l = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > 0)
            u++;
        if (a < 0)
            r++;
        if (b < 0)
            d++;
        if (b > 0)
            l++;
    }
    if (u > 0 && r > 0 && d > 0 && l > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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