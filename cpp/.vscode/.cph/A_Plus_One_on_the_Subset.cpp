#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        // ITS_F.I.Shuvon_Lu_59
//        int ma = 0;
//        int mi = 0;
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (ar[i + 1] < ar[i])
//                mi = ar[i + 1];
//        }
        sort(ar, ar + n);
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (ar[i + 1] > ar[i])
//                ma = ar[i + 1];
//        }
        int ans=ar[n-1]-ar[0];
        cout<<ans<<endl;
    }
    return 0;
}
