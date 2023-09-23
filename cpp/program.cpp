#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    map<int,int>mp;
    while(1)
    {
        int namecode,n;
        for(int i=1; i<=4; i++)
        {
            cout << "Enter ";
            if(i==1)
            {
                cout << "Sheju's ";
            }
            else if(i==2)
            {
                cout << "Shuvon's ";
            }
            else if(i==3)
            {
                cout << "Rakib's ";
            }
            else if(i==4)
            {
                cout << "Ohi's ";
            }
            cout  <<"and point ";
            cin  >> n;
            mp[i] = mp[i]+n;
        }
        system("cls");
        for(auto i:mp)
        {
            if(i.first==1)
            {
                cout << "Sheju's ";
            }
            else if(i.first==2)
            {
                cout << "Shuvon's ";
            }
            else if(i.first==3)
            {
                cout << "Rakib's ";
            }
            else if(i.first==4)
            {
                cout << "Ohi's ";
            }
            cout << i.second << '\n';
        }
    }
}

