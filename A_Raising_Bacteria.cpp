#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        cnt = cnt + n % 2;
        n = n / 2;
    }
    cout << cnt << endl;
}