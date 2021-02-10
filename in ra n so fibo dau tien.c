#include<stdio.h>

unsigned long long fibo( int n)
{
	if ( n == 0 || n == 1){
		return n;
	}
	return fibo( n - 1 ) + fibo( n - 2);
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for( i = 0; i < n; i++){
		printf("%lld ", fibo(i));
	}
	return 0;
}
