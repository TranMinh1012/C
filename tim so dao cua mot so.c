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
	printf("%ld", dao);
	return 0;
}
