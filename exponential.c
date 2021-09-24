/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,n;
	double lambda,exp;
	printf("Enter No of Sample to be generated: ");
	scanf("%d",&n);
	printf("Enter lembda value: ");
	scanf("%lf",&lambda);
	if(lambda<=0)
	printf("Error! only positive value of lembda is acceptable\n");
	else
	{
		printf("\n%d sample of exponential distribution with parameter %.3lf are\n",n,lambda);
		for(i=0;i<n;i++)
		{
		 exp=-log(rand()/(double)RAND_MAX )/lambda; 
		 /*-log X /lambda where x is uniform distribution 
		 is exponetial distribution with parameter lambda */
			printf("%.4lf ",exp);
		}
	}
	return 0;
}
