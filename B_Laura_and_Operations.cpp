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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    int mx = max(max(a, b), c);
    int mn = min(min(a, b), c);
    if ((b + c) % 2 == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if ((a + c) % 2 == 0)
        cout
            << 1 << " ";
    else
        cout << 0 << " ";
    if ((a + b) % 2 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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