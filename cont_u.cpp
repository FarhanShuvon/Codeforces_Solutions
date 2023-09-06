#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    if(t<=1){
        for(int i=1;i>=t;i--){
            sum+=i;
        }
    }
    else {
        for (int i = 0; i <=t; i++)
        {
            sum+=i;
        }
        
    }

    cout<<sum<<endl;
    return 0;
}