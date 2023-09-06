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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> sum;
        sum.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                sum.push_back(arr[i]);
            
            }
            else
            {
                sum.push_back(arr[i]);
                //sum.push_back(arr[i]);
            }
        }
        cout << sum.size() << endl;
        for (int i = 0; i < sum.size(); i++)
        {
            cout << sum[i] << " ";
        }
        cout << endl;
    }
    return 0;
}