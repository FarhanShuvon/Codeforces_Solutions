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
    char a;
    int n;
    cin >> a >> n;
    char arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int k = 8;
    vector<pair<char, int>> v;
    for (int i = 0; i < 8; i++)
    {
        v.pb(mk(arr[i], k));
        k--;
    }
    /*  for (int i = 0; i < 8; i++)
     {
         cout << v[i].F<< v[i].S << endl;
     } */
    for (int i = 1; i <= 8; i++)
    {
        if (i != n)
            cout << a << i << endl;
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != a)
            cout << arr[i] << n << endl;
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