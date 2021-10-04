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
  float sum;
  printf("Enter no of random sample to be generated: " );
  scanf("%d",&n );
  printf("Enter Degree of Freedom for chi sq distribution: " );
  scanf("%d",&df );
  printf("\n%d sample of Chi-sq distribution with %d df are\n",n,df );
  for(i=0;i<n;i++)
  {
    sum=0;
    for(j=0;j<12;j++)
    {
      sum+=rand()/(float)RAND_MAX;
    }
    printf("%.3f ",(sum-6)*(sum-6));
  }
printf("\n");
  return 0;

}
