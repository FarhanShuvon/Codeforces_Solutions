#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        long long int sum=0;
        scanf("%d%d",&a,&b);
        int arr[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            sum +=ceil(((arr[i])*1/b))*b - arr[i];
            printf("%lld\n",sum);
        }



    }
}
