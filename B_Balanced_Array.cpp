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
    int mod = n / 2;
    if (mod % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        vector<int> even;
        vector<int> odd;
        int t = mod;
        int g = mod - 1;
        int i = 2;
        int j = 1;
        int sum1 = 0, sum2 = 0;
        while (t--)
        {
            even.pb(i);
            sum1 = sum1 + i;
            i = i + 2;
        }
        while (g--)
        {
            odd.pb(j);
            sum2 = sum2 + j;
            j = j + 2;
        }
        int rem = sum1 - sum2;
        odd.pb(rem);
        cout << "YES" << endl;
        for (int i = 0; i < even.size(); i++)
        {
            cout << even[i] << " ";
        }
        for (int i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " ";
        }
        cout << endl;
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