/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
        Farhan Israk Shuvon
Leading Uninversity,Sylhet*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pop pop_back
#define mk make_pair
//   (__gcd(x, y))
//((x/gcd(x, y))*y)
#define F first
#define S second
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[k];
    if (n < k)
        cout << "NO" << endl;
    else if (k == 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
    }
    else if (n % 2 == 0)
    {
        if (k % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
        }
        else if (k * 2 <= n)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
            }
            cout << n - (k - 1) * 2 << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        if (k % 2 == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                {
                    cout << 1 << " ";
                }
            }
            cout << n - (k - 1) << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}