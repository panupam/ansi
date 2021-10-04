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
   
    char *arr="New Giks";
   char  *ptr[2]={"Hello Officer Who are you","HEllo"};
    /*printf("%d",-23/4);*/
	char s[100];
	s=gets();
	
	printf("%s",s);
	printf("%s",arr);
    for(i=0;i<25;i++)
    {
        static int k=25;
        printf("%d ",k--);
       
    }
    return 0;
    
}
