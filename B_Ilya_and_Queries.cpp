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
int v[100005];
void solve()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i - 1] == str[i])
        {
            v[i] = 1;
        }
        v[i] = v[i] + v[i - 1];
    }
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        cout << abs(v[r - 1] - v[l - 1]) << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}