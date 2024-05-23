#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "Encapsulation")
            cout << "Locker" << endl;
        else if (str == "Inheritance")
            cout << "Mukesh Ambani" << endl;
        else if (str == "Polymorphism")
            cout << "Human" << endl;
        else
            cout << "ATM Booth." << endl;
    }
}