#include<stdio.h>

 int main(){
 	int a, b;
 	scanf("%d%d", &a, &b);
 	if(b == 0){
 		printf("0");
	 } else {
	 	float c = (float)a / b;
	 	printf("%d %d %d", a+b, a-b, a*b);
	 	printf(" %0.2f", c);
	 	printf(" %d", a%b);
	 	
	 }
	return 0; 
 }
