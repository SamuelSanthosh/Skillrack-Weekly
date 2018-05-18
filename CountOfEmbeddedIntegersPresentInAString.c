/*
    IP1:bingo123fdf435gjg
    OP1:2
    
    IP2:qe45hbj56gjh32gj99
    OP2:4
*/    
#include<stdio.h>
#include <stdlib.h>
int main()
{
  char S[1000];
  fgets(S,1000,stdin);
  int N=strlen(S)-1,count=0,j;
  for(int i=0;i<N;i++)
  {
    j=i;
    while(isdigit(S[i]))
    {
      j++;
      if(isalpha(S[j])||j==strlen(S)-1)
      {
        count++;
        break;
      }        
    }
    i=j;
  }
  printf("%d",count);
}
