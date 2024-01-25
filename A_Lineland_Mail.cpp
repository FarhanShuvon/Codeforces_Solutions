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
    int arr[t];
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        if (i == 0)
        {
            mx = arr[t - 1] - arr[0];
            mn = arr[1] - arr[0];
        }
        else if (i == (t - 1))
        {
            mn = arr[t - 1] - arr[t - 2];
            mx = arr[t - 1] - arr[0];
        }
        else
        {
            mn = arr[i] - arr[i - 1];
            if (arr[i + 1] - arr[i] < mn)
                mn = arr[i + 1] - arr[i];
            mx = arr[t - 1] - arr[i];
            if (arr[i] - arr[0] > mx)
                mx = arr[i] - arr[0];
        }
        cout << mn << " " << mx << endl;
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