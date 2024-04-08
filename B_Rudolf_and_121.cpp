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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.pb(arr[i]);
    }
    bool ans = true;
    for (int i = 0; i < n - 2; i++)
    {
        int j = v[i];
        if (j < 0)
            break;
        v[i] = 0;
        v[i + 1] = v[i + 1] - 2 * j;
        v[i + 2] -= j;
    }
    for (auto it : v)
    {
        if (it != 0){
            ans = false;
        break;}
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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