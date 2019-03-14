#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	int n,i, *A,sum,maxsum=0;
	scanf("%d",&n);
	A=(int*)malloc(sizeof(int*)*n);
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&A[i]);
	
	}
	sum=A[0];
	for (i=1;i<n;i++)
	{
	if (A[i]<A[i-1])
	    {
			sum=A[i];
		 if (sum>maxsum)
			 
			 {
				 maxsum=sum;
				 
			 }
	    }		
	else
      { 
         if (A[i-1]>0)
		sum=sum+A[i];
	      else 
			  sum=A[i];
		maxsum=sum;
		
	   }		
	}
	
	printf("%d",maxsum);
	
	
}