#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,D,max=0,flag=0;
    scanf("%d %d",&N,&D);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%D==0&&a[i]>max)
        {
            max=a[i];
            flag=1;
        }    
    }
    if(flag==1)
        printf("%d",max);
    else
        printf("-1");
    
}