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
    int a, b;
    cin >> a >> b;
    string x, s;
    cin >> x >> s;
    int ans = 1;
    int k = 0;
    int cnt = a * b;
    while(k<10)
    {
        /*  if (a * b > 25)
             break; */
        if (x.find(s) != -1)
        {
            cout << k << endl;
            ans = 0;
            break;
        }
        x = x + x;
        k++;
    }
    if (ans == 1)
        cout << -1 << endl;
}
int32_t main()
{
    /*  ios_base::sync_with_stdio(false);
     cin.tie(NULL); */
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}