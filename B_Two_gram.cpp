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
    string str;
    cin >> str;
    int ans = 0;
    string anss;
    for (int i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (str[i] == str[j] && str[i + 1] == str[j + 1])
                cnt++;
        }
        if (ans < cnt)
        {
            ans = max(ans, cnt);
            anss = string(1, str[i]) + string(1, str[i + 1]);
        }
    }
    cout<<anss<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}