#include<stdio.h>
void printPattern(int n)
{
    int c=0,k=1,j,t=0,a,p;
    for(int i=1;i<=n;i++)
    {
        if(i>1)
        {
            for(int s=0;s<t*2;s++)
                printf("-");
        }
        t++;
        for(j=1;j<=n-c;j++,k++)
            printf("%d*",k);
        c++;
        a=0;
        if(i==1)
        {
            for(p=(n*n)+1;a<n-i;p++,a++)
                printf("%d*",p);
            printf("%d",p++);    
        }
        else
        {
            for(p=(p-(n-i)*2)-3;a<n-i;p++,a++)
                printf("%d*",p);
            printf("%d",p++);
        }
        printf("\n");
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  printPattern(n);
}  
