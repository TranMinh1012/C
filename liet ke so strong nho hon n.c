#include<stdio.h>

int soStrong( int n)
{
	int i, j, m;
	int sum = 0; 
	int giaithua = 1;
	m = n;
	while ( n > 0){
		i = n % 10;
		for ( j = 1; j <= i; j++){
			giaithua *= j;
		}
		sum += giaithua;
		giaithua = 1;
		n /= 10;
	}
	if ( sum == m){
		return 1;
	} else {
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	while ( i < n){
		if ( soStrong(i) == 1){
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}
