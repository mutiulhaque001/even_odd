#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number to check if even or odd.\n");
	scanf("%d",&num);
	if(num%2==0)
		printf("The number %d is even.\n",num);
	else
		printf("The number %d is odd.\n",num);
}	
