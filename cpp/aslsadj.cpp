#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max;
        cin >> n;
        int arr[n], arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr1[arr[n]];
        }
        sort(arr1, arr1 + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr1[i])
                cout << arr[i] - arr1[i] << " ";
            else
                cout << arr[i] - arr1[i + 1] << " ";
        }
    }
}
