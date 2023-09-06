#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() // sHuVoN
{
    ll a, b;
    cin >> a >> b;
    if (b <= (a + 1) / 2)
        cout << 2 * b - 1 << endl;
    else
        cout << 2 * (b - (a + 1) / 2) << endl;
}