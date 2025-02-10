#include<stdio.h>
int main()
{
int a;
printf("Enter a Year:");
scanf("%d",&a);
if (a%400==0)
{
	printf("The Year is a Leap Year.\n",a);
}
else if (a%100==0)
{
	printf("The Year is not a Leap Year.\n",a);
}
else if (a%4==0)
{
	printf("The Year is a Leap Year.\n",a);
}
else 
{
		printf("The Year is not a Leap Year.\n",a);
}
return 0;
}
