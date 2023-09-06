#include <bits/stdc++.h>
#define ll long long
#define pb push_back
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
    vector<int> v;
    ll cnt = 0;
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans + 1 << endl;
}
