#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N,i,flag=0,sum=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%100==a[i]&&a[i]%10!=a[i])
        {
            sum+=a[i];
            flag=1;
        }
    }
    if(flag==1)
        printf("%d",sum);
    else
        printf("0");    
}
