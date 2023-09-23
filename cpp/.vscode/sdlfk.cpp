#include<iostream>

using namespace std;
int gcd(int a, int b);

int main()
{
    int x,y;
    cin>>x>>y;
    int z= gcd(x,y);
    cout<<z;


    return 0;
}
int gcd(int a, int b)
{
    int c=a%b;
    if(c!=0)
        return c;
    a=b;
    b=c;
    return a;
}
