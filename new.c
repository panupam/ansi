/*
Pranav Kumar Anupam
2019/14/059
Practical # 

*/
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
        int p=30;
    }
    return 0;
    
}