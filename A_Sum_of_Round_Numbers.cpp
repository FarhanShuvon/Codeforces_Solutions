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
void solve()
{
    string str;
    cin >> str;
    int n = str.length();
    int t = n - 1;
    if (str[n - 1] == 0)
    {
        cout << 1 << endl;
        cout << str << endl;
    }
    /* else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 0)
                continue;
            else
                cout << str[i];
        }
        cout << endl;
    } */
    cout << str[n - 1] << endl;
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