#include<stdio.h>
int x;
int main()
{
	scanf("%d",&x);
	
	if(x % 2 == 0){
		printf("EVEN\n",x);
	}else{
		printf("ODD\n",x);
	}
	
	return 0;
}

