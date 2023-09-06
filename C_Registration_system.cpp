#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    string str;
    int i=1;
    map<string, int> s;
    while (t--)
    {
        cin >> str;
        if (s[str] == 0)
        {
            s[str] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << str <<s[str]<< endl;
            s[str]++;
        }
    }
    return 0;
}