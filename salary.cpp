#include <stdio.h>
int main()
{
	float b,r,da,h,gross;
	da=(b*8)/100;
	scanf("%f %f",&b,&r);
	if (r==1){
	  h=(b*27)/100;
	
    }
	else if (r==2){
	  h=(b*13)/100;
    }
	else{
	   h=(b*14)/100;
    }  
	gross=b+da+h;
	
	printf("%f",gross);
	
	
}
