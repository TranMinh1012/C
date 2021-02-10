#include<stdio.h>

 main(){
 	float a, b, c;
 	scanf("%f%f", &a, &b);
 	c = (-b)/a;
 	if ( (a==0) & (b!=0 ))
 	printf("VN");
 	else if( (a==0) & (b==0) )
 	printf("VSN");
 	else
 	printf("%0.2f", c);
 	return 0;
 }
