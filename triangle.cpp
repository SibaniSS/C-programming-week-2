# include <stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the sides");
	scanf("%d %d %d",&s1,&s2,&s3);
	if (s1==s2 && s1==s3)
	  printf("Equilateral triangle");
	else if ((s1==s2 && s1!=s3) ||(s1==s3 && s1!=s2))
	  printf("Isoscelenes");
	else
	  printf("Scalene");
	
}
