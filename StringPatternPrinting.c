#include<stdio.h>
#include <stdlib.h>
int main()
{
    char L[100];
    scanf("%s",L);
    for(int i=0;i<strlen(L);i++)
    {
        for(int j=0;j<=i;j++)
            printf("%c",L[i]);
        printf("\n");    
    }
}
