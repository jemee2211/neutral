#include<stdio.h>

main(){
	
	int number;
	
	printf("Enter Number :");
	scanf("%d",&number);
	
	if(number>0){
		
		printf("Number is Positive");
	}
	
	else if(number<0){
		
		printf("Number is Negative");
	}
	
	else {
		
		printf("Number is Neutral");
	}
}
