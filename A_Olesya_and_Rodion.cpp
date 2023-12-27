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
    int a, b;
    cin >> a >> b;
    vector<int> v;
    if (b == 10)
    {
        if (a == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < a - 1; i++)
            {
                v.pb(1);
            }
            v.pb(0);
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
            cout << endl;
        }
    }
    else
    {
        while (a--)
        {
            cout << b;
        }
        cout << endl;
    }
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