#include <stdio.h>
int func(int n){
    int s=0;
    for(int i=1;i<=n;s++){
        i=i/(i%10)*(i%10+1);
        if(i%10==0)
            i++;
    }
    return s;

}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", func(n));
    }
}
