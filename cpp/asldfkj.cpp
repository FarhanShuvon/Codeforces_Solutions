#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string h;
        string g ="3141592653589793238";
        cin>>h;
        int cnt=0;
        for(int i=0; i<g.length(); i++)
        {

            if(h[i]==g[i])
            {
                cnt++;
            }


        }
        cout<<cnt<<endl;

    }
    return 0;
}
