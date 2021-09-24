#include<stdio.h>
#define dim 25


void mprint(float mat[dim][dim],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%.2f ",mat[i][j]);
        
        printf("\n");
    }
     printf("\n");
}

int main()
{
    float mat1[dim][dim], mat2[dim][dim];
    int i,j,m1,n1,m2,n2;

     FILE *fin,*fout;
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
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
    printf("\nMatrix 1\n");
    mprint(mat1,m1,n1);
    printf("\nMatrix 2\n");
    mprint(mat2,m2,n2);
    return 0;

}