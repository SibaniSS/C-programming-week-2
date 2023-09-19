# include <stdio.h>
int main(){
	
	int bill,n;
	scanf("%d",&n);
	if (n<100){
		bill=n*2;
	}
	else if(n>100 && n<200){
		bill=n*3;
	}
	else{
		bill=n*5;
	}
	printf("%d",bill);
	}
