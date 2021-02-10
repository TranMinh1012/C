#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	if( a == b){
		int k = a;
		int l = a;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if( j > b-i+1){
					printf("%d", ++k);
				} else {
					printf("%d", k);
				}
			}
			printf("\n");
			l--;
			k = l;
		}
	}
	if( a < b){
		int k = b;
		int l = b;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if( j > b-i+1){
					printf("%d", ++k);
				} else {
					printf("%d", k);
				}
			}
			printf("\n");
			l--;
			k = l;
		}
	}
	if( a > b){
		int k = a;
		int l = a;
		for( i = 1; i <= a; i++){
			for( j = 1; j <= b; j++){
				if( j > b-i+1){
					printf("%d", ++k);
				} else {
					printf("%d", k);
				}
			}
			printf("\n");
			if( b >= i){
				l--;
			}
			k = l;
		}
	}
	return 0;
}
