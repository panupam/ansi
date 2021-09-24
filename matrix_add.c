/*
Pranav Kumar Anupam
2019/14/059
Practical # 8
Matrix Add Subtract
*/
#include<stdio.h>
#include<stdlib.h>
#define dim 25

void madd(float[dim][dim],float[dim][dim],float[dim][dim],int,int);
void msub(float[dim][dim],float[dim][dim],float[dim][dim],int,int);

void mprint(float [dim][dim],int m,int n);/*prints Matrix*/

int main()
{
    int m,n,i,j;
    float mat1[dim][dim],mat2[dim][dim],mat_add[dim][dim],mat_sub[dim][dim];
    FILE *fin;
    fin=fopen("input.txt","r");
    /*fout=fopen("output.txt","w");*/
    fscanf(fin,"%d%d",&m,&n);
   

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(fin,"%f",&mat1[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(fin,"%f",&mat2[i][j]);
        }
    }
    
    madd(mat1,mat2,mat_add,m,n);
    msub(mat1,mat2,mat_sub,m,n);

    printf("\nMatrix Sum\n");
    mprint(mat_add,m,n);
    printf("\nMatrix Difference\n");
    mprint(mat_sub,m,n);

    
    return 0;


}
void mprint(float mat[dim][dim],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%.2f\t",mat[i][j]);
        
        printf("\n");
    }
     printf("\n");
}

void madd(float m1[dim][dim],float m2[dim][dim],float mout[dim][dim],int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mout[i][j]=m1[i][j]+m2[i][j];
}
void msub(float m1[dim][dim],float m2[dim][dim],float mout[dim][dim],int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mout[i][j]=m1[i][j]-m2[i][j];
}