#include<stdio.h>

int main(){
	float a, b;
	scanf("%f%f", &a, &b);
	if( (a<=0) | (b<=0) )
	printf("0");
	else
	printf("%0.0f %0.0f", 2*(a+b), a*b);
	return 0;
}

