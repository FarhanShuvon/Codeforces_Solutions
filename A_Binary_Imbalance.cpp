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
    string str;
    cin >> str;
    int cnt1 = 0, cnt2 = 0;
    bool ans = false;
    for (int i = 0; i < n ; i++)
    {
        if (str[i] == '0')
            cnt1++;
        else
            cnt2++;
    }
    if (cnt1 > cnt2)
        cout << "YES" << endl;
    // bool ans=false;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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