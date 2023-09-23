#include<stdio.h>
int main()
{
    int n,d,rem,b;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        d=d+rem*b;
        n=n/10;
        b=b*2;
    }
    printf("%d",d);
}
