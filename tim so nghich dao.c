#include<stdio.h>

int main(){
	long n;
	scanf("%ld", &n);
	long dao = 0;
	long m = n;
	while( m > 0){
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	if ( dao == n){
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}

