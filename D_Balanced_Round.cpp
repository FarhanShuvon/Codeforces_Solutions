#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        for (int i = 0; i < a; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= b)
                arr[i] = 0;
        }
        int cnt = 0;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] == 0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}