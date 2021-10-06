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
    int i;
    for(i=0;i<10;i++)
    printf("%d ",fact(i));
    
    return 0;
    
}
