#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the number:");
	scanf("%f",&a);
	b=floor(a);
	c=ceil(a);
	printf("The Floor Value is:%.2f\n",b);
	printf("The Ceiling Value is:%.2f\n",c);
	return 0;
}
