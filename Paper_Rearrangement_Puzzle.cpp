#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    // reverse(arr, arr + t);
    int n;
    cin >> n;
    int idx = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == n)
        {
            idx = i;
        }
    }
    if (idx == t - 1)
        cout << -1 << endl;
    else
    {
        idx++;
        vector<int> v;
        for (int i = idx; i < t; i++)
        {
            v.push_back(arr[i]);
        }
        reverse(v.begin(), v.end());
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}