#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int min = arr[0];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == min)
                cnt++;
        }
        if (cnt == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << " " << n - cnt << endl;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == min)
                    cout << arr[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != min)
                    cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}