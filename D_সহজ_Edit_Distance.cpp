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
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int n = str1.length();
    int m = str2.length();
    str1 = '\0' + str1;
    str2 = '\0' + str2;
    int arr[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (j == 0)
            {
                arr[i][j] = i;
            }
            else if (i == 0)
            {
                arr[i][j] = j;
            }
            else if (str1[i] == str2[j])
            {
                arr[i][j] = arr[i - 1][j - 1];
            }
            else
            {
                arr[i][j] = min(arr[i][j - 1], arr[i - 1][j], arr[i - 1][j - 1]);
            }
        }
    }
    cout << arr[m][n] << endl;
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