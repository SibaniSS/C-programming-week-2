#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%4==0 && (num%100 !=0 || num%400==0))
	printf("YES ITS A LEAP YEAR !!!");
	else
	printf("No Its not a leap year");
	
}
