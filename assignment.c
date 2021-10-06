/*
 Pranav Kumar Anupam
 2019/14/059
 Programming Assignment: 
 Generation of 100 Poisson Distribtion with parameter 1.25
 and Applying Goodness of fit test
 */
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
	float chi_tab , chi_calc=0;
	
	
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
	on what should be smallest frequency between 3,4 or 5 )
	I am merging all i after 4 in 4 */
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
	for(i=0;i<5;i++){
		float temp=expected[i]-freq[i];
		chi_calc+=temp*temp/expected[i];
	}
	/*Degree of freedom is 4; as total number of class is after consolidation is 5 
	and we are not estimating any parameter of distribution. Hence df=5-1
	*/
	chi_tab=9.488; /* alpha 5%*/
	printf("\nCalculated Value of Chi square is %.3f at \n",chi_calc);
	if(chi_calc<chi_tab)
	printf("\nH0 is accepted; i.e Sample follow Pois(%.3f) at alpha .05  \n",mu);
	else 
	printf("\nH0 is rejected; i.e Sample doesnot follow Pois(%.3f)  at alpha .05 \n",mu);

	chi_tab=7.779;
	if(chi_calc<chi_tab)
	printf("\nH0 is accepted; i.e Sample follow Pois(%.3f) at alpha .10  \n",mu);
	else 
	printf("\nH0 is rejected; i.e Sample doesnot follow Pois(%.3f)  at alpha .10 \n",mu);


    return 0;

}
