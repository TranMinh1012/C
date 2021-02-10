#include<stdio.h>

int main(){
	int n, i;
	long long giaithua = 1;
	scanf("%d", &n);
	for ( i = 1; i <= n; ++i){
		giaithua *= i;
	}
	printf("%lld", giaithua);
	return 0;
}
