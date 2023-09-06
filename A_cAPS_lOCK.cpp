#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            cnt++;
    }
    if (cnt == n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = tolower(str[i]);
            else
                str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;

    return 0;
}