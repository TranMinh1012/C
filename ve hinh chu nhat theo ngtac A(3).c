#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	if( a == b){
		int k = a;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if( j > b-i+1){
					printf("%d", k+1);
				} else {
					printf("%d", k--);
				}
			}
			printf("\n");
			k = a;
		}
	}
	if ( a < b){
		int k = b;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if ( j >= a-i+1){
					printf("%d", k);
				} else {
					printf("%d", k--);
				}
			}
			printf("\n");
			k = b;
		}
	}
	if ( a > b){
		int k = a;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if ( i <= a-b+1){
					printf("%d", k--);
				}
				if ( i > a-b+1){
					if ( j > a-i+1){
						printf("%d", k+1);
					} else {
						printf("%d", k--);
					}
				}
			}
			printf("\n");
			k = a;
		}
	}
	return 0;
}
