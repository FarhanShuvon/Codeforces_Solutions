#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // sort(arr, arr + n);
        ll diff = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > i + diff)
            {
                diff = diff + arr[i] - i - diff - 1;
            }
        }
        cout << diff << endl;
    }
    return 0;
}