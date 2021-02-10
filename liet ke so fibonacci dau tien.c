#include<stdio.h>

unsigned long long fibo( int n )
{
	if ( n == 0 ){
		return 0;
	}
	if ( n == 1 ){
		return 1;
	}
	return ( fibo( n - 1 ) + fibo( n - 2 ));
}

int main()
{
	int m;
	scanf("%d", &m);
	int i;
	for ( i = 0; i <= ( m - 1); i++ ){
		printf("%lld ", fibo(i));
	}
	return 0;
} 
