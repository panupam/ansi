/*
Pranav Kumar Anupam
2019/14/059
Practical # 14
Generating N random sample of chi sq distribution
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j,df;
  float sample,sum=0,sqsum=0;
  float mean,var;
  printf("Enter no of random sample to be generated: " );
  scanf("%d",&n );
  printf("Enter Degree of Freedom for chi sq distribution: " );
  scanf("%d",&df );
  printf("\n%d sample of Chi-sq distribution with %d df are\n",n,df );
  for(i=0;i<n;i++)
  {
    sample=0;
    for(j=0;j<12;j++)
    {
      sample+=rand()/(float)RAND_MAX;
    }
    sample=(sample-6)*(sample-6);
    printf("%.3f ",sample);
    sum+=sample;
    sqsum+=sample*sample;
  }
  
	mean=sum/n;
	var=sqsum/n-mean*mean;
	printf("\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
  printf("\n");
  return 0;

}
