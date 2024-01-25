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
int n = 3;
bool a[10][10];
void solve()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            a[i][j] = true;
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
            {
                a[i][j] = 1 - a[i][j];
                a[i - 1][j] = 1 - a[i - 1][j];
                a[i][j + 1] = 1 - a[i][j + 1];
                a[i][j - 1] = 1 - a[i][j - 1];
                a[i + 1][j] = 1 - a[i + 1][j];
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
int32_t main()
{

    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}