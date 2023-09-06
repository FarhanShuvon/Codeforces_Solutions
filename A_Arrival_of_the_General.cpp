#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll trc = 0, trc1 = 0, cnt = 0;
    ll max=arr[0] , min=arr[0] ;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            trc = i;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            trc1 = i;
        }
    }
    if (trc > trc1)
        trc1++;

    cout << trc + (n - 1) - trc1 << endl;

    // cout << trc << " " << trc1 << endl;
    return 0;
}