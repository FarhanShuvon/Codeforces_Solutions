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
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int even = 0;
    int odd = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int cnt = 0;
    int mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % mn == 0)
            cnt++;
    }
    if (odd == n)
    {
        if (cnt == 3)
            cout << "NO" << endl;
    }
    else if (even == 3)
    {
        if (cnt == 3)
            cout << "YES" << endl;
    }
    else if (cnt == 3)
        cout << "YES" << endl;
    /* else
        cout << "NO" << endl; */

    /* if (even == n)
        cout << "YES" << endl;
    else if (odd == n)
        cout << "NO" << endl; */
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