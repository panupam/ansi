#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,n;
	double lambda,u,U;
	printf("Enter No of Sample to be generated: ");
	scanf("%d",&n);
	printf("Enter lembda value: ");
	scanf("%lf",&lambda);
	if(lambda<=0)
	printf("Error! only positive value of lembda is acceptable\n");
	else
	{
		for(i=0;i<n;i++)
		{u=rand()/(double)RAND_MAX   ;
		 U=-log(u)/lambda;
			printf("%.3f ",U);
		}
	}
	return 0;
}
