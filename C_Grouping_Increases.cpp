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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v1;
    vector<int> v2;
    int t = (n + 1) / 2;
    for (int i = 0; i < t; i++)
    {
        v1.pb(arr[i]);
    }
    for (int i = t; i < n; i++)
    {
        v2.pb(arr[i]);
    }
   /*  for (auto it : v1)
        cout << it << " ";
    cout << endl;
    for (auto it : v2)
        cout << it << " ";
    cout << endl; */
    int ps = 0, pt = 0;
    if (v1.size() <= 1)
        ps = 0;
    else if (v2.size() <= 1)
        pt = 0;
    else
    {
        for (int i = 0; i < v1.size() - 1; i++)
        {
            if (v1[i] < v1[i + 1])
                ps++;
        }
        for (int i = 0; i < v2.size() - 1; i++)
        {
            if (v2[i] < v2[i + 1])
                pt++;
        }
    }
    cout << ps + pt << endl;
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