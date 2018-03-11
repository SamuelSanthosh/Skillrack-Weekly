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
    char S1[1000],t;
    scanf("%s",S1);
    int j=strlen(S1)-1,i=0;
    while(i<=j)
    {
        if(!isVowel(S1[i])&&!isVowel(S1[j]))
        {
            t=S1[i];
            S1[i]=S1[j];
            S1[j]=t;
            i++;
            j--;
        }
        if(isVowel(S1[i]))
            i++;
        if(isVowel(S1[j]))
            j--;
    }
    printf("%s",S1);
}
