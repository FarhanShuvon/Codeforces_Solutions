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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
            v.pb(cnt);
        }
        else
        {
            cnt = 0;
            v.pb(cnt);
        }
    }
    int mx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mx < v[i])
            mx = v[i];
    }
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