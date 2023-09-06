#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int cnt = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int t = n - 1;
        int ans[t];
        for (int i = 0; i < n - 1; i++)
        {
            ans[i] = abs(arr[i] - arr[i + 1]);
            // cout<<ans[i]<<" ";
        }
        sort(ans, ans + t);
        int k = 1;
        for (int i = 0; i < t; i++)
        {
            if (ans[i] != k)
            {
                cnt++;
                break;
            }
            k++;
        }
        if (cnt == 0)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}
