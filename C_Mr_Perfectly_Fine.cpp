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
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        string str;
        cin >> m;
        cin >> str;
        v.pb(mk(m, str));
    }
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for (auto &it : v)
    {
        if (it.S == "01")
            v1.pb(it.F);
        else if (it.S == "10")
            v2.pb(it.F);
        else if (it.S == "11")
            v3.pb(it.F);
    }
    int s1 = v1.size();
    int s2 = v2.size();
    int s3 = v3.size();
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