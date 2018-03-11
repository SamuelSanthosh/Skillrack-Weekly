#include<stdio.h>
#include <stdlib.h>
int isVowel(char C)
{
    C=tolower(C);
    if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u')
        return 1;
    return 0;    
}
int main()
{
    char S1[1000];
    int count=0;
    scanf("%s",S1);
    for(int i=0;i<strlen(S1)-1;i++)
        if(isVowel(S1[i])&&isVowel(S1[i+1]))
            count++;
    printf("%d",count);        
}
