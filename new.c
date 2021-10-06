/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
}
int main()
{
    int sample[100],i,freqency[8]={0};
    for(i=0;i<100;i++)
    {
        freqency[sample[i]]++;
    }
    for(i=0;i<8;i++)
    printf("%d %d\n",i,freqency[i]);
    
    return 0;
    
}
