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
    int n, x;
    cin >> n >> x;
    string str;
    cin >> str;
    int cnt = 0;
    // sort(str.begin(), str.end());
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
            cnt++;
    }
    if (cnt == x)
        cout << 0 << endl;
    if (cnt < x)
    {
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'A')
                cnt1++;
            if (cnt1 == x - cnt)
            {
                cout << 1 << endl;
                cout << i + 1 << " " << 'B' << endl;
                return;
            }
        }
    }
    else if (cnt > x)
    {
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
                cnt2++;
            if (cnt2 == cnt - x)
            {
                cout << 1 << endl;
                cout << 1 + i << " " << 'A' << endl;
                return;
            }
        }
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