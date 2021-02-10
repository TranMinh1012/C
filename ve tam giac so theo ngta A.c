#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k;
	for( i = 1; i <= n; i++){
		k = i - 1;
		for( j = 1; j <= n+i-1; j++){
			if( j <= n-i){
				printf("~");
			}
			if ( j >= n-i+1 && j <= n){
				printf("%d", k--);
				if( k < 0){
					k = 1;
				}
			}
			if( j > n && j <= n+i-1){
				printf("%d", k++);
			}
		}
		printf("\n");
	}
	return 0;
}
