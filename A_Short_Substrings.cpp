#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string str1 = "";
        int n = str.length();
        str1=str[0];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                continue;
            }
            str1 = str1 + str[i];
        }
        cout<<str1<<endl;
       
    }
    return 0;
}