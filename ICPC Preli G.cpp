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
    int r = 0;
    int w = 0;
    int frac = n % 6;
    int full = n / 6;
    string wicket = "Wicket.";
    string run = "Run";
    string over = "Over";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'W')
            w++;
        else if (str[i] != 'W')
        {
            r = r + (str[i] - '0');
        }
    }
    if (full == 0)
        over = "Over";
    else if (full == 1 && frac > 0)
        over = "Overs";
    else if (full > 1)
        over = "Overs";
    // cout<<over<<endl;
    if (w > 1)
    {
        wicket = "Wickets.";
    }
    if (r > 1)
        run = "Runs";
    //    cout<<wicket<<endl;
    //    cout<<run<<endl;

    cout << full << "." << frac << " " << over << " " << r << " " << run << " " << w << " " << wicket << endl;
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