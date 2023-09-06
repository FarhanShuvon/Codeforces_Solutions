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
        int temp = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i] = b;
            if (a <= 10 && b > temp)
                temp = b;
        }
        for (int i = 0; i < n; i++)
        {
            if (temp == arr[i])
                cout << i + 1 << endl;
        }
    }
    return 0;
}