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
    vector<int> v;
    if (n == 1)
        cout << 1 << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            v.pb(i);
        }
        reverse(v.begin(), v.end());
        int sum = v[0] + v[v.size() - 1];
        for (int i = 1; i < v.size() - 1; i++)
        {
            sum = sum + 1 + (v[i] - 1) + ((v[0] - v[i]) * (v[i] - 1));
        }
        cout << sum << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}