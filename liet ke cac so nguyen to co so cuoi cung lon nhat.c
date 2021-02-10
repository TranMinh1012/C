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
int SoCuoiMax( int n)
{
	int a = n % 10;
	int max = n % 10;
	int i;
	while( n != 0){
		i = n % 10;
		if ( i > max){
			max = i;
		}
		n /= 10;
	}
	if( max == a){
		return 1;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int count = 0;
	for( i = 2; i < n; i++){
		if( SNT(i)==1 && SoCuoiMax(i) == 1){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}
