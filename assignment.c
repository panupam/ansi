#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
}

int main()
{
    
	int n=100,i,k,sample,expected[10];
	float p,l,u,mu=1.25;
	int freq[10]={0,0,0,0,0,0,0,0,0,0};
	float chi_tab=
	
	
	l=exp(-mu);
    printf("\n100 samples of Pois(%.3f) are \n",mu);
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
		freq[sample]++;
        printf("%d ",sample);

	}

	printf("\n\nPrinting Frequency Table\nX\tfreq\texpected\n");
	/*expected[0]=n*l;
	printf("%d\t%d\t%.3f\n",0,freq[0],expected[0]);*/
	for(i=0;i<10;i++)
	{
		
		expected[i]=floor(n*pow(mu,i)*l/fact(i)+0.5);
		printf("%d\t%d\t%d\n",i,freq[i],expected[i]);
	}

	/* As expected Frequncey can't be smaller than 4(there is disagreement 
	on what should be smallest frequency between 3,4 or 5 )*/
	for(i=5;i<10;i++)
	{
		freq[4]+=freq[i];
		expected[4]+=expected[i];
	}

	printf("\nNew Frequency table after consolidation of expected frequncy smaller than 4\n");
	printf("\nX\tfreq\texpected\n");
	for(i=0;i<5;i++)
	printf("%d\t%d\t%d\n",i,freq[i],expected[i]);

	/* Chi Sq test */
	
	


    return 0;

}