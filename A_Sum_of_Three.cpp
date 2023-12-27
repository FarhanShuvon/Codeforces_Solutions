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
    int a = 1, b = 2;
    int c = n - (a + b);
    int cnt = 1;
    if (n < 7 || n == 9)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        if (n % 3 == 0)
            cout << 1 << " " << 4 << " " << n - 5 << endl;
        else
            cout << 1 << " " << 2 << " " << n - 3 << endl;
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