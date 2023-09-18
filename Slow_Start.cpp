#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int freq = a / 2;
        int in = freq * 5;
        int ans1 = (in - b) / freq;
        double ans2=ceil(b-in)/a;
        if (in > b)
        {
            cout << 5-ans1 << endl;
        }
        else
        {
            cout<<5+ceil(ans2)<<endl;
        }
        //cout<<ceil(ans2)<<endl;
    }
}