#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,m=0,g=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        s=s+a;
        m=m+b;
        g=g+c;
    }
    if(s==0&&m==0&&g==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
