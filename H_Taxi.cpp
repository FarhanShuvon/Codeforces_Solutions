#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a < c)
    {
        if (a + b > c)
        {
            break;
        }
        a = a + b;
        c = c - d;
        // cout << a << " " << c << endl;
    }
    cout << max(a, c) << endl;
}