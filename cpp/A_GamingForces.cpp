#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = -1, cnt = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                cnt++;
        }
        int a = (cnt) / 2;
        int ans = a + (n - 2*a);
        cout << ans << endl;
    }
    return 0;
}
