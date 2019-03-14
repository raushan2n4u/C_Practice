#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n,*A,i;
    int count,cand;
    scanf("%d",&n);
    A=(int*)malloc(sizeof(int*)*n);
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
                    }
                    
    count=1;cand=A[0];
    for(i=1;i<n;i++)
    {
        if (A[i]==cand)
        count++;
        else
        count--;
        
        if(!count) 
        {cand=A[i];
        count=1;
        }
                   
                
                    
                    }
                   count=0;
                   for(i=0;i<n;i++)
                   {
                        if(A[i]==cand)
                        count++ ;          
                                   }
                    
                    
        if (count>n/2)
      {printf("%d",cand);} 
      else
      printf("%d",INT_MIN);             
    
    
    
    return 0;
    }
