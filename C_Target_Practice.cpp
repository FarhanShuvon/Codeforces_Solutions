/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Farhan Israk Shuvon
Leading Uninversity,Sylhet*/
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
    int n = 10;
    int cnt = 0;
    char arr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] == 'X')
            {
                if (i == 0 || i == 9 || j == 0 || j == 9)
                    sum = sum + 1;
                else if (i == 1 || i == 8 || j == 1 || j == 8)
                    sum = sum + 2;
                else if (i == 2 || i == 7 || j == 2 || j == 7)
                    sum = sum + 3;
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                    sum = sum + 4;
                else
                    sum = sum + 5;
            }
        }
    }
    cout << sum << endl;
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