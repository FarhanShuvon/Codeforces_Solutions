#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, d;
        cin >> a >> b >> d;
        string str;
        cin >> str;
        int cnt = b;
        int cn = b;
        int ans = 0;
        for (ll i = 0; i < str.length(); i++)
        {
            if (str[i] == '+')
            {
                cnt++;
                cn++;
                if (cnt >= a)
                    ans = 1;
            }
            else if (str[i] == '-')
                cnt--;
        }
        // cout << cnt << " " << cn << endl;
        if (a == b)
            cout << "YES" << endl;
        else if (cn >= a)
        {
            if (ans == 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "MAYBE" << endl;
        }
        else
            cout << "NO" << endl;
    }
}