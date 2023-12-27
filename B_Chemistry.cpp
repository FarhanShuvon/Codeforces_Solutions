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
    int cnt1 = 0, cnt2 = 0;
    string str;
    vector<char> ans;
    cin >> str;
    /* sort(str.begin(), str.end());
    if ((n - k) == 1)
        cout << "YES" << endl;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
                str[i] = '.';
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '.')
                ans.pb(str[i]);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++)
        {
            // cout << ans[i];
            if (ans[i] == ans[i + 1])
                cnt1++;
            else
                cnt2++;
        }
        //  cout << endl;
         cout << cnt1 << " " << cnt2 << endl;
        if (ans.size() == 1)
        {
            cout << "YES" << endl;
        }
        else if (cnt1 > cnt2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; */
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] != str[i + 1])
            cnt++;
    }
    if (cnt >= k + 1)
        cout << "NO" << endl;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
                str[i] = '.';
        }
    }
    //        cout << "YES" << endl;
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