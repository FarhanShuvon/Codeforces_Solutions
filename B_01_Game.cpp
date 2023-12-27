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
    int n = str.length();
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
            one++;
        else
            zero++;
    }
    if (one == n || zero == n)
        cout << "NET" << endl;
    else if (zero == one)
    {
        if (zero % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
    else
    {
        int mn = min(zero, one);
        if (mn % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
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