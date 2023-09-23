#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    int n;
    cin >> n;
    int g = n / 7;
    if(n==1)
        cout<<0<<" "<<1<<endl;
    else if (g == 0)
    {
        if (n <= 5)
            cout << 0 << " " << 2 << endl;
        else
            cout << 7 - n << " " << 2 << endl;
    }
    else
    {
        if(n-(g*7)>2)
        {
            if(n-(g*7)>5)
            {
                cout<<(g*2)+(7-(n-(g*7)))<<" "<<(g*2)+2;
            }
            else
               cout<<g*2<<" "<<(g*2)+2<<endl;
        }
        else
            cout<<g*2<<" "<<(g*2)+(n-(g*7))<<endl;
    }

    return 0;
}
