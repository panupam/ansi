/*
Pranav Kumar Anupam
2019/14/059
Practical # 8
Matrix Multiplication,trace,transpose
*/
#include<stdio.h>
/* int** mmult(int**,int**);*/
float** transp(float**);
void mprint(int**);/*prints Matrix*/

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
    
    mat2=(float**)malloc(m2*sizeof(float *));
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
    
    if(n1!=m2)
    {
        fprintf(fout,"Error! Multiplication matrix 1 and matrix 2 is not possible\n");
    }
    mat_trans=transp(mat1);
    printf("Printing Transpose\n");
    mprint(mat_trans);


    return 0;
}
/*
int ** mmult(int** mat1,int** mat2)
{
    int i,j;
    float **prod;
}*/
float** transp(float** mat)
{
    int i,j,m=sizeof(mat)/sizeof(float*),n=sizeof(mat[0])/sizeof(float);
    float** trans;
    trans=(float**)malloc(n*sizeof(float*));
    for(i=0;i<n;i++)
        trans[i]=(float*)malloc(m*sizeof(float));
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }

    return trans;

}

void mprint(int** mat)
{
    int i,j,m=sizeof(mat)/sizeof(float*),n=sizeof(mat[0])/sizeof(float);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%.2f ",mat[i][j]);
        
        printf("\n");
    }
}
