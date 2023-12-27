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
    string s;
    cin >> s;
    string str1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (s == "R")
            {
                if (str[i] == str1[j])
                    cout << str1[j - 1];
            }
            else if (s == "L")
            {
                if (str[i] == str1[j])
                    cout << str1[j + 1];
            }
        }
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t = 1;
    // while(t--)
    {
        solve();
    }
    return 0;
}