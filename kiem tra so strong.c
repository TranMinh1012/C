#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int l = 0;
	int giaithua = 1;
	int i, j;
	int m;
	m = n;
	while( n > 0){
		i = n % 10;
		for ( j = 1; j <= i; j++){
			giaithua *= j;
		}
		l += giaithua;
		giaithua = 1;
		n /= 10;
	}
	if ( m == l){
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}
