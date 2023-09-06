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
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                    cnt1++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr2[i] < arr2[j])
                {
                    swap(arr[i], arr[j]);
                    cnt2++;
                }
            }
        }
        cout << cnt1 << " " << cnt2 << endl;
    }
    return 0;
}