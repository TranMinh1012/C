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
int Powerful( int n)
{
	int i;
	for( i = 1; i <= n; i++){
		if( SNT(i) == 1){
			if( n % i == 0 && n % (i*i) == 0){
				return 1;
			}
		}
	}
}
int max( int x, int y){
	return x < y ? y : x;
}
int min( int x, int y){
	return x < y ? x : y;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for( i = min(a, b); i <= max(a, b); i++){
		if( Powerful(i) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}
