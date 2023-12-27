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
    bool ans = false;
    // bool ans = false;
    int n = str.length();
    if (str[0] != '1'||str[0]=='4')
        ans = true;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '1' && str[i] != '4')
                ans = true;
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (str[i] == '4' && str[i + 1] == '4' && str[i + 2] == '4')
                ans = true;
        }
    }
    if (ans)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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