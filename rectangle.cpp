#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the Length:");
	scanf("%f",&a);
	printf("Enter the Width:");
	scanf("%f",&b);
	c=a*b;
	d=2*(a+b);
	printf("The area of Rectangle is:%.2f\n",c);
	printf("The Perimeter is:%.2f\n",d);
	return 0;
}
