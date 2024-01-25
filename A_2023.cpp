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
    int n, t;
    cin >> n >> t;
    int arr[n];
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        p = p * arr[i];
    }
  //  cout << p << endl;
    int k = 1;
    bool ans = false;
    while (1)
    {
        if (p * k == 2023)
            break;
        else if (p * k > 2023)
        {
            ans = true;
            break;
        }
        k++;
    }
    if (!ans)
    {
        cout << "YES" << endl
             << k << " ";
        for (int i = 1; i < t; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }

    else
        cout << "NO" << endl;
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