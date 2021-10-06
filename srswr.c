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
  }
  printf("\n%d sample from given population using SRSWR is given by \n",n );
  for(i=0;i<n;i++)
  {
    index=floor((rand()/(float)RAND_MAX)*N);
    printf("%d ",population[index] );
  }
  printf("\n");		
  return 0;
}
