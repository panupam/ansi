/*
Pranav Kumar Anupam
2019/14/059
Practical #16
Generating random sample of poission distribution

*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,k;
	float p,l,u,mu;
	printf("Enter no of sample to be generated: " );
	scanf("%d", &n);
	printf("Enter mu (parameter) of poission distribution: ");
	scanf("%f",&mu );
	l=exp(-mu);
	for(i=0;i<n;i++)
	{
		k=0;
		p=1;

		do {
			k++;
			u=rand()/(float)RAND_MAX;
			p=p*u;

		} while(p>l);
		printf("%d ",k-1);
	}
	printf("\n");
	return 0;
}
