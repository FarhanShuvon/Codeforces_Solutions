#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    ll d = 1;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] >= a && arr[i] <= b)
                    cnt++;
            }
            v.pb(cnt);
        }
        cout << "Case " << d << ":" << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
        d++;
    }
    return 0;
}