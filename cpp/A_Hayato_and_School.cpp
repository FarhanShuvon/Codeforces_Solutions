#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum % 2 != 0)
            {
                cout << "YES" << endl;
                cout << i << " ";
            }
        }
    }
    return 0;
}