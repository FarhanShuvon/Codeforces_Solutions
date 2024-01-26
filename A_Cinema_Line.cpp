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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = false;
    if (arr[0] != 25)
    {
        cout << "NO" << endl;
        ans = false;
        return;
    }
    else
    {
        int sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i] - 25;
            if (temp > sum)
            {
                cout << "NO" << endl;
                ans = false;
                return;
            }
            else
            {
                sum = sum + 25;
                sum = sum - temp;
                ans = true;
            }
        }
        if (true)
            cout << "YES" << endl;
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