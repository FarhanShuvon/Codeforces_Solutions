#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            cnt++;
    }
    if (cnt == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}