#include<stdio.h>
#include<stdlib.h>
void mprint(float **);
int main()
{
    int n1,m1,n2,m2,i,j;
    float **mat1,**mat2,**mat_prod,**mat_trans,trace_value;
    FILE *fin,*fout;

    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");

    fscanf(fin,"%d%d%d%d",&m1,&n1,&m2,&n2);

    mat1=(float**)malloc(m1*sizeof(float *));
    for(i=0;i<m1;i++)
        mat1[i]=(float *)malloc(n1*sizeof(float));
    
    mat2=(float**)malloc(m1*sizeof(float *));
    for(i=0;i<m2;i++)
        mat2[i]=(float *)malloc(n2*sizeof(float));
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            fscanf(fin,"%f",mat1[i][j]);
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            fscanf(fin,"%f",mat2[i][j]);
        }
    }
    printf("Matrix 1\n");
    mprint(mat1);
    printf("Matrix 2\n");
    mprint(mat2);
    return 0;
    

}

void mprint(float** mat)
{
    int i,j,m=sizeof(mat)/sizeof(float*),n=sizeof(mat[0])/sizeof(float);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%.2f ",mat[i][j]);
        
        printf("\n");
    }
    printf("\n");
}
