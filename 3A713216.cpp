#include <stdio.h>
#include<stdlib.h>
int main(void) 
{
	int a,b,x,y,z;
	printf("¿é¤J¼Æ¦r:");
	scanf("%d",&a);
	
	b=a;
	for(y=1;y<=b;y++)
	{
    for(x=a;x<b;x++)
	printf(" ");
	for(z=1;z<=a;z++)
	printf("*");
     printf("\n");
	a--;
    }
system("pause");
return 0;
}
