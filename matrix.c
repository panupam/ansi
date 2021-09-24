#include<stdio.h>
#include<stdlib.h>
void mprint(float ***);
int main()
{
    int n1,m1,n2,m2,i,j;
    float **mat1,**mat2,**mat_prod,**mat_trans,trace_value;
    FILE *fin,*fout;

    /*fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");*/

    scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
    printf("%d %d",m1,n1);

    mat1=(float**)malloc(m1*sizeof(float *));
    for(i=0;i<m1;i++)
        mat1[i]=(float *)malloc(n1*sizeof(float));
    
    mat2=(float**)malloc(m2*sizeof(float *));
    for(i=0;i<m2;i++)
        mat2[i]=(float *)malloc(n2*sizeof(float));
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%f",&mat1[i][j]);
        }
    }
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%f",&mat2[i][j]);
        }
    }
    printf("\nMatrix 1\n");
    mprint(&mat1);
    printf("\nMatrix 2\n");
    mprint(&mat2);
    return 0;
    

}

void mprint(float ***mat)
{
    int i,j,m=sizeof(*mat)/sizeof(float*),n=sizeof(*mat[0])/sizeof(float);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%.2f ",mat[i][j]);
        
        printf("\n");
    }
    printf("\n");
}
