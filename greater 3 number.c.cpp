#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b){
		if (a>=c){
			printf("A greater",a);
		
		}else {
			printf("B greater",b);
		}
	 } else{
	 	if(b>=c){
	 		printf("B is greater",b);
		 }else{
		 	printf("C is greater",c);
		 }
	  }
	  return 0;	
	}

