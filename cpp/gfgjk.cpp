#include <bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0,cnt=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                while (arr[i] != 0 && arr[i + 1] != 0)
                {
                    arr[i]--;
                    arr[i + 1]--;
                    c++;
                }
            }
            if (arr[i] != arr[i + 1]){
                cnt++;
            }
        }
        if(n%2!=0)
            cout<<cnt+c+1<<endl;
        else
            cout<<c+cnt<<endl;
        return 0;
    }
}
