#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str1 = "hello";
    cin >> str;
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str1[j])
        {
            cnt++;
            j++;
        }
    }
    if (cnt == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}