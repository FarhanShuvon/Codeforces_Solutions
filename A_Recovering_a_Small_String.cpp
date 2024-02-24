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
    /*  vector<pair<char, int>> v;
     char a = 'a';
     for (int i = 1; i <= 26; i++)
     {
         v.pb(mk(a, i));
         a++;
     } */
    string ans = "";
    if (n <= 27)
    {
        ans = 'a';
        ans = ans + 'a';
        n = n - 3;
        ans += ('a' + n);
        cout << ans << endl;
    }
    else if (n >= 28 && n <= 53)
    {
        ans = 'a';
        n = n - 28;
        ans += ('a' + n);
        ans += 'z';
        cout << ans << endl;
    }
    else
    {
        n = n - 53;
        ans += ('a' + n);
        ans += 'z';
        ans += 'z';
        cout << ans << endl;
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