#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int cont=0;

        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < t; i++)
        {
            if(arr[i]<0) {
                cont++;
            }
        }

        if(cont>0) {
            cout<<"Not jolly"<<endl;
        }
        else{
            cout<<"Jolly"<<endl;
        }
        
        
        
    }
    return 0;
}