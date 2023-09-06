#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = arr[0];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans)
            arr[i] = 0;
        else if (arr[i] != ans)
        {
            v.pb(i);
            ans = arr[i];
        }
    }
    if (v.size() < n - 2)
    {
        for (int i = 0; i < v.size(); i++)
            arr[v[i]] = 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cnt = 1;
            break;
        }
    }
    if (cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}