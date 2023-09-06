#include <bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        int n,dist,rate,overtime=0;
        cin>>n>>dist>>rate;
        if(n==0 && dist==0 && rate==0){
            break;
        }
        int mor[n],eve[n];
        for (int i = 0; i < n; i++)
        {
            cin>>mor[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>eve[i];
        }

        sort(mor,mor+n);
        sort(eve,eve+n);
        reverse(eve,eve+n);
        for (int i = 0; i < n; i++)
        {
            cout<<eve[i];
        }
        int len[n];
        for (int i = 0; i < n; i++)
        {
            len[i]=mor[i]+eve[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(len[i]>dist){
                overtime=overtime+(len[i]-dist);
            }
        }

        cout<<overtime*rate<<endl;
        


        
    }
    return 0;
}