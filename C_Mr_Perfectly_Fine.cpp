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
    int mn1 = INT_MAX;
    int mn2 = INT_MAX;
    int mn3 = INT_MAX;
    int cn = 0, cnt = 0, c = 0;
    while (n--)
    {
        int a;
        string s;
        cin >> a >> s;
        if (s[0] == '1' && s[1] == '1')
        {
            mn1 = min(mn1, a);
            c++;
        }
        else if (s[0] == '1' && s[1] == '0')
        {
            mn2 = min(mn2, a);
            cn++;
        }
        else if (s[0] == '0' && s[1] == '1')
        {
            mn3 = min(mn3, a);
            cnt++;
        }
    }
    vector<int> v;
    v.pb(c);
    v.pb(cn);
    v.pb(cnt);
    int brk = 0;
    for (auto it : v)
    {
        if (it == 0)
            brk++;
    }
    if (c == 0)
    {
        if (brk >= 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    if (mn1 < mn2 + mn3)
        cout << mn1 << endl;
    else
        cout << mn2 + mn3 << endl;
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