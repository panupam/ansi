/*
Pranav Kumar Anupam
2019/14/059
Practical # 13
Generating Samples of Normal Distribution from uniform distribution
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  float mu,sigma,sample,sqsum=0,sum=0;
  float mean,var;
  printf("Enter Number of Sample to be generated: ");
  scanf("%d",&n );
  printf("Enter mean and s.d. of normal distribution: " );
  scanf("%f%f",&mu,&sigma );
  printf("\n%d sample of N(%.3f,%.3f) are \n",n,mu,sigma*sigma);
  for(i=0;i<n;i++)
  {
    sample=0;
    for(j=0;j<12;j++)
    {
      sample+=rand()/(float)RAND_MAX;
    }
    sample=mu+(sample-6)*sigma ;
    printf("%.3f ",sample);
    sum+=sample;
    sqsum+=sample*sample;
  
  }
  printf("\n");
  
	mean=sum/n;
	var=sqsum/n-mean*mean;
	printf("\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
  printf("\nTheoretical Mean %.3f and Theoretical Variance %.3f\n",mu,sigma*sigma);


  return 0;
}
