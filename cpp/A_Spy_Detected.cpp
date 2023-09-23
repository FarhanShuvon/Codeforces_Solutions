#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int arr[n];
        int br[1000];
        memset(br,0,sizeof br);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            br[arr[i]]++;
        }
        for(int i=0;i<15;i++){
            cout<<br[i]<<' ';
        }
        cout << endl;
        /* for(int i=0; i<n; ++i)
        {
            if(br[arr[i]]==1){
                cout << i+1 << '\n';
            break;
            }
        } */
    }
    return 0;
}