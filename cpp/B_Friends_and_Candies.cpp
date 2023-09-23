#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        while(arr[0]==arr[n-1]){
            arr[n-1]=arr[n-1]-arr[0];
            arr[0]==arr[n-1]+arr[0];
            ans++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}