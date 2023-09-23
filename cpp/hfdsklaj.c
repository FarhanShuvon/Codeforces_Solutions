#include<stdio.h>
#include<math.h>
int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,r,c,i;
        scanf("%d",&n);
        long long int b=ceil(sqrt(n*1.0));
        long long int x=(b*b)-n;
        if(x<b)
        {
            r=b;
            c=x+1;
        }
        else
        {
            c=b;
            r=(n)-((b-1)*(b-1));
        }
        if(b%2==0)
        {
            int temp=c;
            c=r;
            r=temp;

        }
        printf("Case %d: %lld %lld\n",k,c,r);
        k++;
    }


}
