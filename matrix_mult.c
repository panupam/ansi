/*
Pranav Kumar Anupam
2019/14/059
Practical # 8
Matrix Multiplication,trace,transpose
*/
#include<stdio.h>
#include<stdlib.h>
#define dim 25
void mmult(float[dim][dim],float[dim][dim],float[dim][dim],int,int,int);
void transp(float [dim][dim],float [dim][dim],int ,int );
void mprint(float [dim][dim],int m,int n);/*prints Matrix*/
void trace(float [dim][dim],int m,int n);
int main()
{
    int n1,m1,n2,m2,i,j;
    float mat1[dim][dim],mat2[dim][dim],mat_prod[dim][dim],mat_trans[dim][dim],trace_value;
    FILE *fin,*fout;
    fin=fopen("input.txt","r");
    /*fout=fopen("output.txt","w");*/
    fscanf(fin,"%d%d%d%d",&m1,&n1,&m2,&n2);


    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            fscanf(fin,"%f",&mat1[i][j]);
        }
    }
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            fscanf(fin,"%f",&mat2[i][j]);
        }
    }

    if(n1!=m2)
    {
        printf("Error! Multiplication matrix 1 and matrix 2 is not possible\n");
    }else
    {
        mmult(mat1,mat2,mat_prod,m1,n1,n2);
        printf("\nProduct of given matrix is \n");
        mprint(mat_prod,m1,n2);

        transp(mat_prod,mat_trans,m1,n2);
        printf("\nPrinting Transpose of Matrix M1*M2 \n");
        mprint(mat_trans,n2,m1);
        printf("\nPrinting Trace of Matrix M1*M2\n" );
        trace(mat_prod,m1,n2);
    }


    transp(mat1,mat_trans,m1,n1);
    printf("\nPrinting Transpose of Matrix 1\n");
    mprint(mat_trans,n1,m1);
    printf("\nPrinting Trace of Matrix 1\n" );
    trace(mat1,m1,n1);
    transp(mat2,mat_trans,m2,n2);
    printf("\nPrinting Transpose of Matrix 2\n");
    mprint(mat_trans,n2,m2);

    printf("\nPrinting Trace of Matrix 2\n" );
    trace(mat2,m2,n2);


    return 0;
}
void mmult(float mat1[dim][dim],float mat2[dim][dim],float prod[dim][dim],int m1,int n1,int n2)
{
    int i,j,k,prodsum;
    for(i=0;i<m1;i++)
    {

        for(j=0;j<n2;j++)
        {
            prodsum=0;
            for(k=0;k<n1;k++)
                prodsum+=mat1[i][k]*mat2[k][j];
            prod[i][j]=prodsum;
        }
    }
}

void transp(float mat[dim][dim],float trans[dim][dim],int m,int n)
{
    int i,j;


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }



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

void trace(float mat[dim][dim],int m,int n)
{ int i;
  float sum=0;
  if(m!=n)
  {
    printf("\nError! Trace is defined for only square Matrix\n" );
    return;
  }
  for(i=0;i<n;i++)
    sum+=mat[i][i];
    printf("\nTrace of this matrix is %.2f \n", sum );

}
