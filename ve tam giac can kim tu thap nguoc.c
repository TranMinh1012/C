#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for( i = 1; i <= n; i++){
		for ( j = 1; j <= 2*n-i; j++){
			if( j < i){
				printf("~");
			}
			if( j >= i){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
