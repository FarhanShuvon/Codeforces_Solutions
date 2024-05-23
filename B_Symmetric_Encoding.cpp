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
    string s = "";
    for (auto it : mp)
    {
        s.pb(it.first);
    }
    string s1 = s;
    reverse(s1.begin(), s1.end());
    vector<pair<char, char>> v;
    int t = (s.size() + 1) / 2;
    for (int i = 0; i < t; i++)
    {
        v.pb(mk(s[i], s1[i]));
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {

            if (str[i] == v[j].first)
            {
                ans.pb(v[j].second);
            }
            else if (str[i] == v[j].second)
            {
                ans.pb(v[j].first);
            }
        }
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