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
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a + b + c;
        if (ans > 9 || ans < 6 || a == 5 || b == 5 || c == 5 || a < 0 || b < 0 || c < 0)
        {
            cout << "Case " << k << ": invalidum" << endl;
            k++;
        }
        else
        {
            cout << "Case " << k << ": perfectus" << endl;
            k++;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* int t;
    cin >> t;
    while(t--) */
    {
        solve();
    }
    return 0;
}