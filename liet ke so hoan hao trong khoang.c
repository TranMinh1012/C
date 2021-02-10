#include<stdio.h>

int main(){
	unsigned int a, b;
	scanf("%d%d", &a, &b);
	int i;
	int m = 6;
	while(1){
		int j = 0;
		for ( i = 1; i < m; i++){
			if ( m % i == 0){
				j += i;
			}
		}
		if ( a < b){
			if( m >= b ){
			break;
		}
			if (  ( a < m ) && ( m < b)  ){
				if ( m == j){
			printf("%d ", m);
		}
		}
		}
		if ( a > b){
			if( m >= a ){
			break;
		}
			if (  ( b < m ) && ( m < a )  ){
				if ( m == j){
			printf("%d ", m);
		}
		}
		}
		m += 2;
	}
	return 0;
}
