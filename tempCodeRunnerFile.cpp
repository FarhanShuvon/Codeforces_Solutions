/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Farhan Israk Shuvon
Leading Uninversity,Sylhet*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pop pop_back
#define mk make_pair
#define gcd(x,y)   (__gcd(x, y))
#define lcm(x,y) ((x/gcd(x, y))*y)
#define F first
#define S second
void solve()
{
   int x,y;
   cin>>x>>y;
   cout<<lcm(x,y)<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}