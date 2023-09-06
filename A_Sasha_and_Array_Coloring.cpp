#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0, j = n - 1; i < j; i++, j--)
            c += (a[j] - a[i]);
        cout << c << endl;
    }
    return 0;
}