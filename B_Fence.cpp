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
    int n, k;
    cin >> n >> k;
    int arr[n + 5];
    arr[0] = 0;
    int sum = 0;
    int ans = 0;
    int mn = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i - 1] + arr[i];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        if (mn > (arr[i + k - 1] - arr[i - 1]))
        {
            mn = (arr[i + k - 1] - arr[i - 1]);
            ans = i;
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