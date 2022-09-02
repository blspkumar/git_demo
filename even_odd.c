#include<stdio.h>

int main()
{
	int num;

	printf("enter number to check even or odd ");
	scanf("%d",&num);

	if( (num&1) == 0)
	{
		printf("even");
	}
	else {
		printf("odd");
	}

	return 0;


}

