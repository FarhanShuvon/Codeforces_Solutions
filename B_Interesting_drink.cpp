#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        ll ans = upper_bound(arr, arr + n, d) - arr;
        cout << ans << endl;
    }
}