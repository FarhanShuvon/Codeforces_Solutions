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
        int neg = 0;
        int pos = 0;
        int sum = 0;
        int plus = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
            {
                neg++;
            }
            else
            {
                pos++;
            }
            sum = sum * arr[i];
            plus = plus + arr[i];
        }
        if (sum == 1 && plus >= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (neg == pos)
            {
                neg--;
                ans++;
            }
            cout << ans << endl;
        }
        return 0;
    }
}