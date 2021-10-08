/*
Pranav Kumar Anupam
2019/14/059
Practical # 15
Generating sample of Binomial Distribution

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x,N,i,j,sum=0,sqsum=0;
	float p,u;
	float mean,var;
	srand(400);
	printf("Enter No of sample to be generated : ");
	scanf("%d",&N);
	printf("Enter the parameter (n & p) for generating Binomial Distribution : ");
	scanf("%d%f",&n,&p);
	printf("\n%d sample of Binom(%d, %.2f) distribution are\n",N,n,p);
	for(i=0;i<N;i++)
	{ x=0;
		for(j=0;j<n;j++)
		{
			u=rand()/(float)RAND_MAX;
			if(u<=p)
			x++;
		}
		printf("%d ",x);
		sum+=x;
		sqsum+=x*x;
	}
	
	mean=sum/(float)N;
	var=sqsum/(float)N-mean*mean;
	printf("\n\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
	printf("\nTheoretical Mean %.3f and Theoretical Variance %.3f",n*p,n*p*(1-p));
	printf("\n");
	return 0;


}
