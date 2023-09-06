#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + k <= 5)
            cnt++;
    }
   // cout<<cnt<<endl;
    if (cnt >= 3)
        cout << cnt / 3 << endl;
    else
        cout << 0 << endl;
}