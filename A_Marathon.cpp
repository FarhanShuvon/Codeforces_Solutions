#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 4;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[0] < arr[i])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}