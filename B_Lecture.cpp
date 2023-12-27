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
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> str;
    vector<string> lec;
    for (int i = 0; i < m; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        str.pb(mk(str1, str2));
    }
    for (int i = 0; i < n; i++)
    {
        string str3;
        cin >> str3;
        for (int j = 0; j < m; j++)
        {
            if (str3 == str[j].first || str3 == str[j].second)
            {
                if (str[j].first.size() > str[j].second.size())
                {
                    cout << str[j].second << " ";
       
                }
                else
                {
                    cout << str[j].first << " ";
                
                }
            }
        }
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}