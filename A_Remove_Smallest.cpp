#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int arr[n];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 1;
        sort(arr, arr + n);

        for (int i = 0; i < n-1 ; i++)
        {
            if (arr[i + 1] - arr[i] > 1)
                cnt = 0;
        }
        if (cnt == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}