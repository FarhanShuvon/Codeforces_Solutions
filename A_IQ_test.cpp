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
    ll cnt1 = 0;
    ll cnt2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cnt1++;
        else if (arr[i] % 2 != 0)
            cnt2++;
    }
    if (cnt1 == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                cout << i + 1 << endl;
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                cout << i + 1 << endl;
        }
    }

    return 0;
}