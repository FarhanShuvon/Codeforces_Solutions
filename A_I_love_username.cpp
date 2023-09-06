#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cnt++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}