#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b,x,sum=0;
        int c,y=0,k;
        scanf("%f%f%d",&a,&b,&c);
        float B=b/100;
        while(sum>=c)
        {
            sum=sum+a+(a*B);
            y++;
        }
        printf("%d",y);


    }
}
