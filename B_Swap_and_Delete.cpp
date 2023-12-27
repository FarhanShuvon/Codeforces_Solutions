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
    string str;
    cin >> str;
    int cnt1 = 0, cnt2 = 0;
    int n = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
            cnt1++;
        else
            cnt2++;
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            if (cnt1 > 0)
                cnt1--;
            else
                break;
        }
        else
        {
            if (cnt2 > 0)
                cnt2--;
            else
                break;
        }
    }
    cout << cnt1 + cnt2 << endl;
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