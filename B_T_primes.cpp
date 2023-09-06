#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    int arr[1000000] = {0};
    for (ll i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2; j * i <= 1000000; j++)
            {
                arr[j * i] = 1;
            }
        }
    }
    ll t;
    ll sq;
    for (ll i = 0; i < n; i++)
    {
        cin >> t;
        sq = sqrt(t);
        if (t == 1)
            cout << "NO" << endl;
        else if (sq * sq == t && arr[sq] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}