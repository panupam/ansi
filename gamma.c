/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,alpha,j,n;
    float lambda,gamma;
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
	}

}