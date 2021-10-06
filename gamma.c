/*
Pranav Kumar Anupam
2019/14/059
Practical # 11
Printing N random sample of Gamma distribution where alpha is integer.

*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,alpha,j,n;
    float lambda,gamma,sum=0,sqsum=0;
    float mean,var;
    printf("Enter no of sample to be generated: ");
    scanf("%d",&n);
    printf("Enter alpha(positive int) and lambda of gamma distribution :");
    scanf("%d%f",&alpha,&lambda);
    printf("%d sample of Gamma(%d,%.3f) are \n",n,alpha,lambda);

    for(i=0;i<n;i++)
	{
            gamma=0;
            for(j=0;j<alpha;j++)
            {
                gamma+=-log(rand()/(float)RAND_MAX )/lambda;
            }

		 /*-log X /lambda where x is uniform distribution
		 is exponetial distribution with parameter lambda
         sum of alpha exponential distribution is gamma distribution.  */
			printf("%.3f ",gamma);
            sum+=gamma;
            sqsum+=gamma*gamma;
	}
    
	mean=sum/n;
	var=sqsum/n-mean*mean;
	printf("\n\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
    printf("\nTheoretical Mean %.3f and Theoretical Variance %.3f",alpha/lambda,alpha/(lambda*lambda));
    printf("\n");
  return 0;

}
