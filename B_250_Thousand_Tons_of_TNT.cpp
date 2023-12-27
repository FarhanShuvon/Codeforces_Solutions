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
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    vector<int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.pb(i);
            if (i * i != n)
            {
                div.pb(n / i);
            }
        }
    }
    int ans = 0;
    for (auto seg : div)
    {
        int cnt = 0;
        int gain = 0;
        int mx = 0;
        int mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            gain = gain + ar[i];
            cnt++;
            if (cnt == seg)
            {
                mx = max(mx, gain);
                mn = min(mn, gain);
                cnt = 0;
                gain = 0;
            }
        }
        ans = max(abs(mx - mn), ans);
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