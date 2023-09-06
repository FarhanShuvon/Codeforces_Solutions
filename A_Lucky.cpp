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
        int arr[6] = {0};
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 5; i >= 0; i--)
        {
            arr[i] = n % 10;
            n /= 10;
        }
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
                sum1 = sum1 + arr[i];
            else if (i >= 3)
                sum2 = sum2 + arr[i];
        }
        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}