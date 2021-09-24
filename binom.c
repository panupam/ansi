/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,N,i,j;
	float p;
	printf("Enter No of sample to be generated : ");
	scanf("%d",&N);
	printf("Enter the parameter (n & p) for generating Binomial Distribution : ");
	scanf("%d%f",&n,&p);
	printf("\n%d sample of Binom(%d, %.2f) distribution are\n",N,n,p);
	for(i=0;i<N;i++)
	{ int x=0;
		for(j=0;j<n;j++)
		{  
		/*	printf("%f ",pvalue); */
			if(p<(rand()/(float)RAND_MAX))
			x++;
		}
		printf("%d ",x);
	}
	printf("\n");
	return 0;

	
}
