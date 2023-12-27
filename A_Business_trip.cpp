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
    int k;
    cin >> k;
    int n = 12;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    int sum = 0;
    int ans = 0;
    bool check = false;
    cout << endl;
    if (k == 0)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum >= k)
            {
                check = true;
                ans = i;
                break;
            }
        }
        if (check)
            cout << ans + 1 << endl;
        else
            cout << -1 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}