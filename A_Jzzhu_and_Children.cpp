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
    int n, a;
    cin >> n >> a;
    int arr[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = ceil((arr[i]) /(float) a);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mx)
        {
            mx = arr[i];
            ans = i + 1;
        }
    }
    cout << ans << endl;
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