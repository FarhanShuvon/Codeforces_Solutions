/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Farhan Israk Shuvon
Leading Uninversity,Sylhet
*/
#include <iostream>
#include <string>
using namespace std;
//#define int long long
/* #define pb push_back
#define pop pop_back
#define mk make_pair
//   (__gcd(x, y))
//((x/gcd(x, y))*y)
#define F first
#define S second
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return a * (b / (gcd(a, b)));
} */
void solve()
{
    string s1, s2;
    while (getline(cin,s1),getline(cin,s2)) // declaring two strings and taking input of them under a while loop
    {
        int n = s1.length(), m= s2.length(); // taking the strings size in two variables
        int arr[n + 1][m + 1];                // declaring the lcs array
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                arr[i][j] = 0; // making all the element of the array 0
            }
        }
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0; // if the i and j is zero them the row and column will be zero
                }
                else if (s1[i - 1] == s2[j - 1])
                {
                    arr[i][j] = 1 + arr[i - 1][j - 1]; // if the any charecter matches with each other we will make 1 + diagonal value
                }
                else
                {
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]); // else it will be max of left and right value
                }
            }
        }
        cout << arr[n][m] << endl; // printing the answer
    }
}
int main()
{
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}