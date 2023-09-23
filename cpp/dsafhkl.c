#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[5][5]= {{25,24,23,22,21},{10,11,12,13,20},{9,8,7,14,19},{2,3,6,15,18},{1,4,5,16,17}};
        int n,k=1;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(n==arr[i][j])
                {
                    printf("Case %d: %d %d",k,i,j);
                    k++;
                }
            }
        }
    }    
}
