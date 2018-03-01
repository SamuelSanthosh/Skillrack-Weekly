#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1,j=N;i<=N/2;i++,j--)
        printf("%d %d ",i,j);
    if(N%2!=0)
        printf("%d ",i);
}