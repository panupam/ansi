/*
Pranav Kumar Anupam
2019/14/059
Practical # 10
Printing N random Sample of exponential distribution. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,n;
	float lambda,exp,sum=0,sqsum=0;
	float mean,var;
	printf("Enter No of Sample to be generated: ");
	scanf("%d",&n);
	printf("Enter lembda value: ");
	scanf("%lf",&lambda);
	if(lambda<=0)
	printf("Error! only positive value of lembda is acceptable\n");
	else
	{
		printf("\n%d sample of exponential distribution with parameter %.3lf are\n",n,lambda);
		for(i=0;i<n;i++)
		{
		 exp=-log(rand()/(float)RAND_MAX )/lambda;
		 /*-log X /lambda where x is uniform distribution
		 is exponetial distribution with parameter lambda */
			printf("%.4lf ",exp);
			sum+=exp;
			sqsum+=exp*exp;
		}
	}
	
	mean=sum/n;
	var=sqsum/n-mean*mean;
	printf("\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
	printf("Theoretical Mean %.3f and Theoretical Variance %.3f",1/lambda,1/(lambda*lambda));
	printf("\n");
	return 0;
}
