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
    int sum = 0;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        arr1[i] = abs(arr1[i]);
        arr2[i] = abs(arr2[i]);
        v.pb(mk(arr2[i], arr1[i]));
    }
    sort(v.begin(), v.end());
    // for(auto it:v)cout<<it.first<<" "<<it.second<<endl;
    // cout<<endl;
    bool ans = true;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i].second;
        int t = v[i].first;
        int h = sum / k;
        if (sum % k != 0)
        {
            h++;
        }
        if (h > t)
            ans = false;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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