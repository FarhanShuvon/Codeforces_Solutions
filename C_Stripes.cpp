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
    int n = 8, m = 8;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool ans = false;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 'R')
                cnt++;
        }
        if (cnt == 8)
        {
            ans = true;
            break;
        }
    }
    if (ans)
        cout << 'R' << endl;
    else
        cout << 'B' << endl;
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