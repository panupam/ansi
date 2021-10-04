/*
Pranav Kumar Anupam
2019/14/059
Practical # 13
Generating Normal Distribution from uniform distribution
*/

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
  int n,i,j;
  float mu,sigma,sum;
  printf("Enter Number of Sample to be generated: ");
  scanf("%d",&n );
  printf("Enter mean and s.d. of normal distribution: " );
  scanf("%f%f",&mu,&sigma );
  for(i=0;i<n;i++)
  {
    sum=0;
    for(j=0;j<12;j++)
    {
      sum+=rand()/(float)RAND_MAX;
    }
    printf("%.3f ",mu+(sum-6)*sigma );
  }
  return 0;
}
