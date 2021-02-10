#include<stdio.h> 

 int main(){
 	float a, b, c;
 	scanf("%f%f%f", &a, &b, &c);
 	float max = (a > b) ? a : b;
 	max = (max > c) ? max : c;
 	printf("%0.0f", max);
 	return 0;
 }
 
