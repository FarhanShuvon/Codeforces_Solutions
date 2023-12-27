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
    int n = str.size();
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
        {
            str[i] = '.';
            if (v1.size() != 0)
            {
                str[v1.back()] = '.';
                v1.pop_back();
            }
            continue;
        }
        if (str[i] == 'b')
        {
            str[i] = '.';
            if (v2.size() != 0)
            {
                str[v2.back()] = '.';
                v2.pop_back();
            }
            continue;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            v2.pb(i);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            v1.pb(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '.')
            cout << str[i];
    }
    cout << endl;
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