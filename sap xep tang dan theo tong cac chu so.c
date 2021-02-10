#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int m, n;
	m = a;
	n = b;
	int sum1 = 0; int sum2 = 0;
	while( m != 0){
		sum1 += m % 10;
		m /= 10;
	}
	while( n != 0){
		sum2 += n % 10;
		n /= 10;
	}
	if ( sum1 > sum2){
		printf("%d %d", b, a);
	} else {
		printf("%d %d", a, b);
	}
 	return 0;
}
