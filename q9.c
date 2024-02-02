#include<stdio.h>
 int main()
{
	float  a,b,c,g;
	int d,e,f;
	printf("enter the value ");
	scanf("%f \n  %d \n%f  %d \n %f \n %d \n %d \n %d",&d,&a,&e,&f,&b,&c ,&g);
	int i=d*a+e*f-b/c+g;
	printf("%d",i);
	return 0;
}

