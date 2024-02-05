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
    while (n--)
    {
        string str;
        cin >> str;
        map<char, int> mp;
        for (int i = 0; i < str.length(); i++)
        {
            mp[str[i]]++;
        }
        bool ans = true;
        for (auto it : mp)
            cout << it.second << " ";
        cout << endl;
        /* for (auto it : mp)
        {
            if (it.second >= 2)
                ans = true;
            else
                false;
        }
        if (ans)
            cout << 1;
        else
            cout << 0; */
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