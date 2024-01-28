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
    int sum = n % 4;
    if (n == 0)
        cout << 1 << endl;
    else if (sum == 1)
        cout << 8 << endl;
    else if (sum == 2)
        cout << 4 << endl;
    else if (sum == 3)
        cout << 2 << endl;
    else
        cout << 6 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //   cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}