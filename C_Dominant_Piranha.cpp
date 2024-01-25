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
    int arr[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int ans = -1;
    bool a = false;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] == mx && (arr[i + 1] < mx || arr[i - 1] < mx))
        {
            ans = i + 1;
            break;
        }
    }
    if (arr[0] == mx && arr[1] < mx)
        ans = 1;
    if (arr[n - 1] == mx && arr[n - 2] < mx)
        ans = n;
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