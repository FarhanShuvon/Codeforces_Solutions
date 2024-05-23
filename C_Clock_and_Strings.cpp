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
bool check(int s, int e, int m)
{
    if (s <= e)
    {
        return m >= s && m <= e;
    }
    else
    {
        return m >= s && m <= e;
    }
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s1 = min(a, b);
    int e1 = max(a, b);
    int s2 = min(c, d);
    int e2 = max(c, d);
    int cn = 0, cnt = 0;
    if (check(s2, e2, s1) != check(s2, e2, e1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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