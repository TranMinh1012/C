#include<stdio.h>
#include<math.h>

 int main(){
 	int a, b, c, d;
 	float x, x1, x2;
 	scanf("%d%d%d", &a, &b, &c);
 	d = b * b - 4 * a * c;
 	x1 = (-b + sqrt(d) ) / (2*a);
 	x2 = (-b - sqrt(d) ) / (2*a);
 	x = -b/(2*a);
 	if ( d < 0)
 	printf("NO");
 	else if ( d == 0)
    printf("%0.2f", x);
    else
    printf("%0.2f %0.2f", x1, x2);
    return 0;
	 
 }
 
 
