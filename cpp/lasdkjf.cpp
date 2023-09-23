#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0,c=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
                cnt++;
            else if(arr[i]%2==0)
                c++;
        }
        if(cnt==3||(cnt>1&&c>1))
    {
        cout<<"YES"<<endl;

        for(int i=0; i<n; i++)
            {
                if(arr[i]%2==0||arr[i]%2!=0)
                {
                    cout<<i<<" ";
                }
            }
        }
        else
            cout<<"NO"<<endl;

        }
    return 0;
}
