/*
Pranav Kumar Anupam
2019/14/059
Practical # 18
Sampling from Population(integer) using SRSWoR
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,N,*population,i,index,j;


  printf("Enter no of Sample to be generated: " );
  scanf("%d",&n);
  printf("Enter population size: ");
  scanf("%d",&N);
  if(n>N)
  {
    printf("Error! sample size cannot be greater then population size for SRSWoR\n" );
    return 0;
  }
  population=(int *)malloc(N*sizeof(int));
  printf("Enter %d population: ",N);
  for(i=0;i<N;i++)
  {
    scanf("%d", population+i);
  }
  printf("\n%d sample from given population using SRSWoR is given by \n",n );
  for(i=0;i<n;i++)
  {
    index=(rand()/(float)RAND_MAX)*(N-i);
    printf("%d ",population[index] );
    for(j=index;j<N-i-1;j++)
    {
      population[j]=population[j+1];
    }
  }
  return 0;
}
