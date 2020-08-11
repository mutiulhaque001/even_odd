# even_odd
Simple program to find if a given number is even or odd.

#include<stdio.h><br>
int main()<br>
{<br>
	int num;<br>
	printf("Enter a number to check if even or odd.\n");<br>
	scanf("%d",&num);<br>
	if(num%2==0)<br>
		printf("The number %d is even.\n",num);<br>
	else<br>
		printf("The number %d is odd.\n",num);<br>
}
