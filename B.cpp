#include <bits/stdc++.h> //using header file
#define pb push_back
#define mp make_pair // defining some charecter for easy declaration
using namespace std; // using declaration command
int main()           // declaring main function
{
    int t;
    cin >> t; // using testcase
    while (t--)
    {
        string str; // declaring string and taking input
        cin >> str;
        int n = str.length(); // storing the lenght of the string
        int cnt = 0;
        map<char, int> v;            // using map of a charecter and an int to it
        map<char, int>::iterator it; // building an iterator
        for (int i = 0; i < n; i++)
        {
            v[str[i]]++; // counting the fequency of an charecter
        }
        for (it = v.begin(); it != v.end(); it++)
        {
            cout << it->second << it->first; // printing the charecter and its count
        }
        cout << endl;
    }
    return 0;
}