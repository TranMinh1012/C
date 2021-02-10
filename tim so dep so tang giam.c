#include<stdio.h>
#include<math.h>

int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else {
		for( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int Tang( int n)
{
	int max;
	max = n % 10;
	n /= 10;
	int i;
	while( n != 0){
		i = n % 10;
		if( i >= max){
			return 0;
		} else {
			max = i;
		}
		n /= 10;
	}
	return 1;
}
int Giam( int n)
{
	int min;
	min = n % 10;
	n /= 10;
	int i;
	while( n != 0){
		i = n % 10;
		if( i <= min){
			return 0;
		} else {
			min = i;
		}
		n /= 10;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int count = 0;
	for( i = pow(10, n-1); i < pow(10, n); i++){
		if( SNT(i) == 1 && ( Tang(i) == 1 || Giam(i) == 1) ){
			count++;
		}
	}
	printf("%d", count);
}
