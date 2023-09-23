#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt=0,k=1;
        string a;
        cin >> a;
        string b = a;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[k] == a[i+1])
                cnt++;
            k++;
        }
        if (cnt > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
