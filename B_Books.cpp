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
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + a);
    int cnt = 0;
    int sum = 0;
    int k=0;
    map<int, int> mp;
    /*  for (int i = 0; i < a; i++)
     {
         mp[arr[i]]++;
     }
     for(auto it:mp)
     {
         cout<<it.F<<" "<<it.S<<endl;
     } */
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
        if (sum <= b)
        {
            k++;
        }
        else
        {
            sum = sum - arr[cnt];
            cnt++;
        }
    }
    cout << k << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}