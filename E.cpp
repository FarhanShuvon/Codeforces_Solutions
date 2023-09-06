#include <bits/stdc++.h> //using declaration command
using namespace std;
#define ll long long // defining ll as long long
int main()
{
    ll n;
    cin >> n; // inputing the size of the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking the array input
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            cnt1++;
        else if (arr[i] == 3) // counting the numbers of 1,2,3,4
            cnt3++;
        else if (arr[i] == 4)
            cnt4++;
        else if (arr[i] == 2)
            cnt2++;
    }
    // cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << endl;

    int cnt = 0;
    while (cnt1 != 0 && cnt3 != 0)
    {
        cnt = cnt + 1;
        cnt1--;
        cnt3--;
    }
    int a3 = 0;
    if (cnt1 == 0 && cnt3 != 0)
    {
        a3 = cnt3;
    }
    int c13 = 0;
    int c2 = (cnt1 + (cnt2 * 2)) / 4;
    if ((cnt1 + (cnt2 * 2)) % 4 != 0)
        c2++;
    cout << cnt4 + a3 + c2 + cnt << endl;
}