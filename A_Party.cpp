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
    int cnt = 0;
    int r = 0;
    int ans=0;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        r=0;
        cnt=arr[i];
        while(cnt!=-1)
        {
            cnt=arr[cnt];
            r++;
        }
        ans=max(ans,r);
    }
    cout<<ans+1<<endl;
    
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