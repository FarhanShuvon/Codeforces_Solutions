/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
        Farhan Israk Shuvon
Leading Uninversity,Sylhet*/
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
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }
    /* int r[n];
    for (int i = 1; i <= n; i++)
    {
        r[i] = i;
    } */
    int ans = 0;
    for (int i = 1; i <= m - 1; i++)
    {
        if (arr[i + 1] >= arr[i])
            ans = ans + arr[i + 1] - arr[i];
        else
            ans = ans + (n - arr[i] + arr[i + 1]);
    }
    cout << ans + arr[1] - 1 << endl;
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