/*
Pranav Kumar Anupam
2019/14/059
Practical # 12
Printing N sample of Beta Distribution with both integer parameter
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,alpha,beta,j,n;
    float lambda=1,gamma1,gamma2;
    printf("Enter no of sample to be generated: ");
    scanf("%d",&n);
    printf("Enter alpha(positive int) and lambda of gamma distribution :");
    scanf("%d%d",&alpha,&beta);
    printf("%d sample of Beta(%d,%d) are \n",n,alpha,beta);

    for(i=0;i<n;i++)
	{
    /*-log X /lambda where x is uniform distribution
   is exponetial distribution with parameter lambda
       sum of alpha exponential distribution is gamma distribution.
      if  two independent gamma distribution X1~ gamma(alpha,1), X2~ gamma(beta,1)
  if  Y=  X1/(X1+X2) then  Y~Beta(alpha,beta)
         */
            gamma1=0;
            for(j=0;j<alpha;j++)
            {
                gamma1+=-log(rand()/(float)RAND_MAX )/lambda;
            }
            gamma2=0;
            for(j=0;j<beta;j++)
            {
                gamma2+=-log(rand()/(float)RAND_MAX )/lambda;
            }


			printf("%.3f ",gamma1/(gamma1+gamma2));
	}
  return 0;

}
