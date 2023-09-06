#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //freopen("jumping.in", "r", stdin);
        int n;
        cin >> n;
        int arr[n];
        int x ;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.pb(x);
        }
        int var = v[0];
        if (var == 1)
        {
            for (int i = n-1; i >= 0; i--)
            {
                cout << i << endl;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                int ans = 0;
                if ((n - i) % var == 0)
                {
                    ans = (n - i) / 2;
                }
                else
                    ans = -1;

                cout << ans << endl;
            }
        }
    }
    return 0;
}