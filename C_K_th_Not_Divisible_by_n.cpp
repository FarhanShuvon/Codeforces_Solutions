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
    int a, n;
    cin >> a >> n;
    vector<int> v;
    int cnt = n / (a - 1);
    int ans = n + cnt;
    if (ans % a == 0)
        cout << ans - 1 << endl;
    else
        cout << ans << endl;
}
int32_t main()
{
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}