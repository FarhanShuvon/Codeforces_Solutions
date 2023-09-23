#include<iostream>
#include<math.h>
int main()
{
    long long int n, m, t, a, b, c, x, y, sum=0, cnt=0, i, j;
    cin >> s;
    string k="", u;
    ll l = s.size();
    for0(i, l)
    {
        k = s;
       // pnf(k);
char cur = s[i];
        for(j='a'; j<='z'; j++)
        {
   if(j==cur)
continue ;
 k=s;
            k[i]=j;
            u = k;
           reverse(all(k));
       //     pnf2(u, k);
            if(k==u)
            {
                YES;
                return 0;
            }
            k="";
        }

    }
    NO;
    return 0;
}
