#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("Enter a Value:");
	scanf("%d",&a);
	b=a-(a/10)*10;
	printf("The Last Digit of the given number is:%d",b);
}
