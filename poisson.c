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
	int n,i,k,sum=0,sqsum=0,sample;
	float p,l,u,mu;
	float mean,var;
	printf("Enter no of sample to be generated: " );
	scanf("%d", &n);
	printf("Enter mu (parameter) of poission distribution: ");
	scanf("%f",&mu );
	printf("\n%d samples of Pois(%.3f) are \n",n,mu);
	l=exp(-mu);
	for(i=0;i<n;i++)
	{
		/*
		we can produce a Poisson deviate N by generating
		independent exponential deviates X1, X2, . . . with mean 1/μ, stopping
		as soon as X1 + · · · + Xm ≥ 1; then N ← m − 1.
		we know exponetial distribution is -ln u/mu. Hence −(ln U1 + · · · + ln Um)/μ ≥ 1. Simplifying this expression,
		we see that the desired Poisson deviate can be obtained by calculating e^−μ,
		converting it to a fixed point representation, then generating one or more uniform
		deviates U1, U2, . . . until the product satisfies U1 . . .Um ≤ e^−μ
		*/
		k=0;
		p=1;

		do {
			k++;
			u=rand()/(float)RAND_MAX;
			p=p*u;

		} while(p>l);
		sample=k-1;
		printf("%d ",sample);
		sum+=sample;
		sqsum+=sample*sample;


	}
	mean=sum/n;
	var=sqsum/n-mean*mean;
	printf("\nCalculated Mean is %.3f and Calculated Variance is %.3f\n",mean,var);
	printf("Theoretical Mean %.3f and Theoretical Variance %.3f",mu,mu);
	printf("\n");
	return 0;
}
