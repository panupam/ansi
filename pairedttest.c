/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
#include<stdio.h>
#include<math.h>
float amean(float * a, int n )
{
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
}

int main()
{
    int i,n;
    float *x,*y,*d,tabt;
    FILE *fp1,*fp2;
    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");
    fscanf(fp1,"%d",&n);
    x=(float*)malloc(n*sizeof(float));
    y=(float*)malloc(n*sizeof(float));
    d=(float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
         fscanf(fp1,"%f%f",x+i,y+i);
         d[i]=x[i]-y[i];
    }
    fscanf(fp1,"%f",&tabt);
    
    
    
}