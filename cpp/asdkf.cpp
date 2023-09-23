#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the actual array :"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";//printing the acutal array
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        ar[i]=arr[i];
    }
    cout<<"The copied array :"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";//printing the copied  array
    }

}
