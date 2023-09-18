#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll s, n;
    cin >> s >> n;
    ll cnt = 0;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(make_pair(a, b));
    }
    /* for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second<<endl;
    } */
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (s > (it->first))
        {
            s = s + it->second;
            cnt++;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }
    if (cnt == n)
        cout << "YES" << endl;
}