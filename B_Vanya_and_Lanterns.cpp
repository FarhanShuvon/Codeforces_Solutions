#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double end = l - arr[n - 1];
    double st = arr[0];
    int mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, arr[i + 1] - arr[i]);
    }
    double mid = (double)mx / 2;
    double ans = max(end, max(mid, st));
    cout << fixed << setprecision(10) << ans << endl;
}