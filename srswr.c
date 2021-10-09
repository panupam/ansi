/*
Pranav Kumar Anupam
2019/14/059
Practical # 17
Sampling from Population(integer) using SRSWR
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,N,*population,i,index;
  float mu=0,var=0,xbar=0,ssq=0;
  srand(5);  /*Setting Seeds*/

  printf("Enter no of Sample to be generated: " );
  scanf("%d",&n);
  printf("Enter population size: ");
  scanf("%d",&N);
  population=(int *)malloc(N*sizeof(int));
  printf("Enter %d population: ",N);
  for(i=0;i<N;i++)
  {
    scanf("%d", population+i);
    mu+=population[i];
    var+=population[i]*population[i];
  }
  printf("\n%d sample from given population using SRSWR is given by \n",n );
  for(i=0;i<n;i++)
  {
    index=floor((rand()/(float)RAND_MAX)*N);
    printf("%d ",population[index] );
    xbar+=population[index];
    ssq+=population[index]*population[index];

  }
  printf("\n");	
  mu=mu/N;
  var=var/N-mu*mu;
  xbar=xbar/n;
  ssq=ssq/n-xbar*xbar;
  printf("\nPopulation Mean is %.2f  & Population Varince is %.2f\n",mu,var);
  printf("\nSample Mean is %.2f and Sample Variance is %.2f\n",xbar,ssq);
  return 0; 
}
