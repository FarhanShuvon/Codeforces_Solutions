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
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr, arr + 9);
    vector<int> v;
    if (n <= 9)
        cout << n << endl;
    else if (n > 45)
        cout << -1 << endl;
    else
    {
        if (n < 18)
        {
            bool ans = false;
            for (int i = 1; i <= 9; i++)
            {
                for (int j = 1; j <= 9; j++)
                {
                    if ((i + j) == n)
                    {
                        ans = true;
                        cout << i << j << endl;
                        return;
                    }
                }
            }
        }
        else
        {
            int x = 9;
            while (n > 0)
            {
                v.pb(min(x,n));
                n = n - min(x, n);
                x--;
            }
            reverse(v.begin(), v.end());
            for (auto it : v)
                cout << it;
            cout << endl;
        }
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