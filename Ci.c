#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci,a;
	printf("Enter the Principle Amount:");
	scanf("%f",&p);
	printf("Enter the Rate:");
	scanf("%f",&r);
	printf("Enter the Time:");
	scanf("%f",&t);
	a=p*pow((1+r/100),t);
	ci=a-p;
	printf("The Compound Interest is:%.2f\n",ci);
	printf("The Amount is:%.2f\n",a);
	return 0;

}
