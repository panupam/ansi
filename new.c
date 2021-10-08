#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
void main()
{
 int i,j,k1,k2,n;
 float x[200],u,y1,y2,mx=0,vx=0,am,thvx;

 printf("Enter the sample size and parameters\n");
 scanf("%d%d%d",&n,&k1,&k2);
 for(i=0;i<n;i++)
 {
  y1=1;
  for(j=0;j<k1;j++)
  {
   u=rand()/(float)RAND_MAX;
   y1=y1*(1-u);
  
  }
   y1=-(log(y1));
  y2=1;
  for(j=0;j<k2;j++)
  {
   y2=y2*(1-rand()/(float)RAND_MAX);
   
  }
  y2=-(log(y2));
  x[i]=y1/y2;
 }
 for(i=0;i<n;i++)
 {
  mx+=x[i];
  vx+=x[i]*x[i];
 }
 mx=mx/n;
 vx=vx/n-mx*mx;
 printf("Randaom sample generated from beta distribution(%.2f.%.2f)\n",k1,k2);
 for(i=0;i<n;i++)
 printf("%.2f\t",x[i]);
 printf("\nMean=%.2f\tVariance==%.2f",mx,vx);
 am=(float)k1/(k2-1);
 thvx=(float)(k1*(k1+k2-1))/(pow((k2-1),2)*(k2-2));
 printf("\nTheoretical Mean=%f\nTheoretical Variance=%f",am,thvx);
 getch();
}
