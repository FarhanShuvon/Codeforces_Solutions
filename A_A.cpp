#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[2];
    arr[0] = a;
    arr[1] = b;
    sort(arr, arr + 2);
    if (arr[0] <= c && arr[1] >= c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}