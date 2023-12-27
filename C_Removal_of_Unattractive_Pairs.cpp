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
    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    /*  for (auto i : mp)
     {
         cout << i.F << " " << i.S << endl;
     } */
    int mx = 0;
    for (auto i : mp)
    {
        mx = max(mx, i.S);
    }
    // cout << mx << endl;
    mx = mx * 2;
    if (mx > n)
    {
        cout << mx - n << endl;
    }
    else
    {
        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
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