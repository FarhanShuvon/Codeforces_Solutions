//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(n==1||n==2)
        cout<<n<<endl;
      else
        cout<<ceil(sqrt(n))+1<<endl;



    }
}
