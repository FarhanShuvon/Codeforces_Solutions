#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    int n;
    cin >> n;
    int g = n / 7;
    if (g == 0)
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
            cout<<g*2<<" "<<(g*7)+2<<endl;
        }
        else
            cout<<g*2<<" "<<g*2<<endl;
    }

    return 0;
}
