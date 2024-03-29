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
    str = to_string(n);
    bool ans = false;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0)
        cout << "YES" << endl;
    else
    {
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '4')
                cnt1++;
            else if (str[i] == '7')
                cnt2++;
        }
        // int t=str.length();
        int sum = cnt1 + cnt2;
        if (sum != str.length())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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