# include <stdio.h>
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && b>c)
	printf("A is the greatest number");
	else if (b>c && b>a)
	printf("B is the greatest number");
	else
	printf("C is the greatest number");
}
