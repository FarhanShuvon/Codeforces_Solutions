#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define all(v) v.begin(),v.end()
#define pb push_back
#define fi first
#define sc second
#define endl '\n'
#define gcd(x, y) (__gcd(x, y))
#define lcm(x, y) ((x/gcd(x, y))*y)
#define mem(a,b) memset(a, b, sizeof(a))
#define de(x) cerr<<#x<<" :: "<<x<<" "<<endl
void solve()
{
    int j = 10000, k =0;
    string s;
    vector<int>v;
    while(cin>>s)
    {
        v.pb(s);
        k+= sizeof(s);
        if(k>=10000)
        {
            break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0), cout.tie(0);
 ll t=1;
 //cin>>t;
 while(t--)
 {
 solve();
 }
 return 0;
}
