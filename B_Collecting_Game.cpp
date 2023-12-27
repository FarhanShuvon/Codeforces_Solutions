/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Farhan Israk Shuvon
Leading Uninversity,Sylhet
*/
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
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return a * (b / (gcd(a, b)));
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> y = arr;
    map<int, int> ans;
    sort(y.begin(), y.end());
    int removed = 0;
    int sum = y[0];
    int index = 0;
    int i = 1;
    while (i < n)
    {
        if (sum < y[i])
        {
            for (int j = index; j <= i; j++)
            {
                ans[y[j]] = removed;
            }
            index = i;
        }
        removed++;
        sum = sum + y[i++];
    }
    for (int j = index; j < n; j++)
    {
        ans[y[j]] = removed;
    }
    for (auto it : arr)
    {
        cout << ans[it] << " ";
    }
    cout << endl;
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