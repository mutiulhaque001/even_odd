# even_odd
Simple program to find if a given number is even or odd.

#include<stdio.h><br>
int main()<br>
{<br>
&emsp;&emsp;	int num;<br>
&emsp;&emsp;	printf("Enter a number to check if even or odd.\n");<br>
&emsp;&emsp;	scanf("%d",&num);<br>
&emsp;&emsp;	if(num%2==0)<br>
&emsp;&emsp;&emsp;		printf("The number %d is even.\n",num);<br>
&emsp;&emsp;	else<br>
&emsp;&emsp;&emsp;		printf("The number %d is odd.\n",num);<br>
}
