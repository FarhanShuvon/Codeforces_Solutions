#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else if(a<b)
        return gcd(b,a);
    else
        return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int g=a*b;
    cout<<g/gcd(a,b)<<endl;
    return 0;
}
