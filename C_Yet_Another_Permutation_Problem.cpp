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
        int arr[n] = {0};
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            arr[k] = __gcd(i, i + 1);
            k++;
        }
        cout << __gcd(8, 12) << endl;
    }
    return 0;
}