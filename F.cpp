#include <bits/stdc++.h> //using declaration command
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c; // taking the days of the prices of honey and taking the price of rapsberry per day
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking the rate of the honey barrel per day
    }
    vector<int> v; // taking a vector for stroring profit values
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            v.push_back(arr[i] - arr[i + 1]); // if it mathces the condiotn it will insert the value
        }
        else
            v.push_back(0); // else it will insert 0
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end()); // sorting and reversing the array for finding the maximum profit value
    // cout << endl;
    int ans = v[0];
    if (ans - c > 0)
        cout << ans - c << endl;
    else
        cout << 0 << endl;
    // main();
}
