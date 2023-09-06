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
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0 && i % 2 != 0)
                even++;
            else if (arr[i] % 2 != 0 && i % 2 == 0)
                odd++;
        }
        if (even == odd)
            cout << even << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}