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
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    int kt = 0;
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = kt;
        kt++;
    }
    //  reverse(arr, arr + a);
    vector<int> v;
    for (int i = n - k; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = n - k - 1; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    //  b++;
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