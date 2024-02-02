#include<stdio,h>
 int main()
{
	int a,b,c,h;
	float d;
	printf("enter the value");
	scanf("%f \n %d \n%d \n %d \n %d",&d,&a,&b,&c,&h);
	int g=d+(a*b)/c+h;
	printf("%d",g);
	return 0;
}
