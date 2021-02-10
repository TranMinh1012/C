#include<stdio.h>

int main(){
	unsigned int n;
	scanf("%d", &n);
	int i;
	int m = 6;
	while(1){
		int j = 0;
		for ( i = 1; i < m; i++){
			if ( m % i == 0){
				j += i;
			}
		}
			if ( m >= n){
			break;
		}
		if ( m == j){
			printf("%d ", m);
		}
		m += 2;
	}
	return 0;
}
