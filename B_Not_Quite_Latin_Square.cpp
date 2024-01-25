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
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    sort(str3.begin(), str3.end());
    if (str1[0] == '?')
    {
        if (str1[1] == 'A' && str1[2] == 'B')
            cout << 'C' << endl;
        if (str1[1] == 'A' && str1[2] == 'C')
            cout << 'B' << endl;
        if (str1[1] == 'B' && str1[2] == 'C')
            cout << 'A' << endl;
    }
    else if (str2[0] == '?')
    {
        if (str2[1] == 'A' && str2[2] == 'B')
            cout << 'C' << endl;
        if (str2[1] == 'A' && str2[2] == 'C')
            cout << 'B' << endl;
        if (str2[1] == 'B' && str2[2] == 'C')
            cout << 'A' << endl;
    }
    else if (str3[0] == '?')
    {
        if (str3[1] == 'A' && str3[2] == 'B')
            cout << 'C' << endl;
        if (str3[1] == 'A' && str3[2] == 'C')
            cout << 'B' << endl;
        if (str3[1] == 'B' && str3[2] == 'C')
            cout << 'A' << endl;
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