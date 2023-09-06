#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mx < arr[i])
                mx = arr[i];
        }
        if (mx == arr[0])
            cout << mx << endl;
        else
            cout << mx + 1 << endl;
    }
    return 0;
}