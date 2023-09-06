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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
                cnt++;
        }
        if (cnt == 0)
            cout << n << endl;
        else if (n % 2 == 0)
            cout << (n / cnt) + 1 << endl;
        else
            cout << (n / cnt) << endl;
    }
    return 0;
}