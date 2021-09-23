#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    /*printf("%d",-23/4);*/
    for(i=0;i<25;i++)
    {
        static int k=25;
        printf("%d ",k--);
    }
    return 0;
    
}