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
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    bool ans = false;
    int cnt = 0;
    if (sum % 3 == 0)
        cout << 0 << endl;
    else if ((sum + 1) % 3 == 0)
        cout << 1 << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 3 == 0)
            {
                cout << 1 << endl;
                ans = true;
                break;
            }
        }
        if (!ans)
            cout << 2 << endl;
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