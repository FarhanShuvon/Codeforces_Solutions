#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        //sort(str.begin(), str.end());
        int cnt=0;
         for(int i=0;i<str.length();i++)
         {
            if(str[i]==str[i+1])cnt++;
         }
         if(cnt==0)
         cout<<"YES"<<endl;
         else if(cnt%2==0)
         cout<<"NO"<<endl;
         else 
         cout<<"YES"<<endl;
    }
    return 0;
}