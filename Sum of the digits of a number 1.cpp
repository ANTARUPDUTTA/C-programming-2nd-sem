#include <stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	while (n!=0)
	{
		s=s+(n%10);
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
