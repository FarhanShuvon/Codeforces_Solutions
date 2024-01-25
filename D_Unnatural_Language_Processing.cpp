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
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'c' || str[i] == 'b' || str[i] == 'd')
            cout << str[i];
        else
        {
            cout << str[i];
            if (str[i + 1] == 'b' || str[i + 1] == 'c' || str[i + 1] == 'd')
            {
                if (str[i + 2] != 'a' && str[i + 2] != 'e')
                {
                    cout << str[i + 1];
                    i = i + 1;
                }
            }
            if (i != n - 1)
                cout << ".";
        }
    }
    cout<<endl;
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