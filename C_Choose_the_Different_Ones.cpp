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
    int a, b, k;
    cin >> a >> b >> k;
    int arr[a];
    int ar[b];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> ar[i];
    }
    map<int, int> v1, v2;
    for (auto it : arr)
    {
        if (it <= k)
            v1[it]++;
    }
    for (auto it : ar)
    {
        if (it <= k)
            v2[it]++;
    }
    /*  for (auto it : v1)
         cout << it << " ";
     cout << endl;
     for (auto it : v2)
         cout << it << " ";
     cout << endl; */
    if (v1.size() < k / 2 || v2.size() < k / 2)
        cout << "NO" << endl;
    else
    {
        bool ans = true;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 1; i <= k; i++)
        {
            if (v1[i] == 0 && v2[i] == 0)
                ans = false;
        }
        if (ans)
            cout << "YES" << endl;
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