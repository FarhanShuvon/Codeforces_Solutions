#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int long long  n;
        cin>>n;
        int long long ans=1;
        while(ans<=n){
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<endl;
        
    }
    return 0;
}