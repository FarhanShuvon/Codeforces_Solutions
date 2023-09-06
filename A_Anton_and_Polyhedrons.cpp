#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "Octahedron")
            sum = sum + 8;
        else if (str == "Dodecahedron")
            sum = sum + 12;
        else if (str == "Tetrahedron")
            sum = sum + 4;
        else if (str == "Cube")
            sum = sum + 6;
        else if (str == "Icosahedron")
            sum = sum + 20;
    }
    cout << sum << endl;
    return 0;
}