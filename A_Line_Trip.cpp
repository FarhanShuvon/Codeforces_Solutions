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
    int n, x;
    cin >> n >> x;
    int arr[n];
    vector<int> v;
    v.pb(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.pb(arr[i]);
    }
    int ans = (x - arr[n - 1]) * 2;
    // cout << ans << endl;
    /* if (n == 1)
        cout << arr[0] << endl;
    else */
    int cnt = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(v[i + 1] - v[i], mx);
        cnt=1;
    }
    if (cnt == 1)
        mx = max(ans, mx);
    cout << mx << endl;
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