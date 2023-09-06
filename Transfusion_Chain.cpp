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
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
        }
        for (int i = 0; i < n; i++)
        {
            cout << str << " ";
            cout<<endl;
        }
    }
    return 0;
}