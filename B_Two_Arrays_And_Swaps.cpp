#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int ar[n];
        //int max = 0;
        int sum = 0;
        int sum2 = 0;
        int a = n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(arr, arr + n);
        sort(ar, ar + n);
        reverse(ar, ar + n);
        for (int i = 0; i < k; i++)
        {
            arr[i] = max(arr[i], ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }
}