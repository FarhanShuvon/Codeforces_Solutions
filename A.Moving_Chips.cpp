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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    bool ans = false;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            v.pb(i);
    }
    int j = v[0];
    int h = v[v.size() - 1];
    /* for (auto it : v)
        cout << it << " ";
    cout << endl;
    cout<<j<<" "<<h<<endl; */
    for (int i = j; j < h; j++)
    {
        if (arr[j] == 0)
            cnt++;
    }
    cout << cnt << endl;
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