#include <stdio.h>
int main()
{
	int year,month,day;
	scanf("%d %d",&year,&month);
	if (year%4==0 && (year%100 !=0 || year%400 ==0))
	    if (month ==1 || month ==3 || month==5|| month==7|| month==8 || month==10 || month ==12)
				  printf("31 days");
	    else if (month==2)
	       printf("29 days");
	    else
	      printf("30 days");
	else
	    if (month==1||month ==3|| month==5 || month==7|| month==8 || month==10 ||month==12)
				  printf("31 days");
	    else if (month==2)
	       printf("28 days");
	    else
	      printf("30 days");
	   
	   
}
