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
    int n, h, m;
    cin >> n >> h >> m;
    int b = 0;
    b = b + (h * 60) + m;
    int s = 24 * 60;
    int time = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        time = (60 * h + m) - b;
        if (time < 0)
            time = time + 24 * 60;
        s = min(s, time);
    }
    cout << s / 60 << " " << s % 60 << endl;
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