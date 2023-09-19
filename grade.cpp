# include <stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float per;
	printf("Enter physics marks");
	scanf("%d",&m1);
	printf("Enter chemistry marks");
	scanf("%d",&m2);
	printf("Enter maths marks");
	scanf("%d",&m3);
	printf("Enter biology marks");
	scanf("%d",&m4);
	printf("Enter computer marks");
	scanf("%d",&m5);
	per=(m1+m2+m3+m4+m5)*0.5;
	if (per >=90)
	   printf("GRADE A");
	else if (per>=80)
	   printf("GRADE B");
	else if (per>=70)
	   printf("GRADE C");
	else if (per>=60)
	   printf("GRADE D");
	else if (per>40)
	   printf("GRADE E");
	else 
	  printf("GRADE F");
	  
}
	
	
	
	
	
