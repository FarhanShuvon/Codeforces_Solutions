#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,mod1,mod2;
        scanf("%d",&a);
        if(a%2!=0)
        {
            my_function(mod1,mod2,a);
            if(mod1==mod2)
                printf("%d %d",mod1,mod2);

        }
    }
}
int my_function(int a,int b,int n)
{
    for(int i=2; i<n; i=i+2 )
    {
        return n%i;
    }
    for(int i=3; i<n; i=i+2 )
    {
        return n%i;
    }
}

