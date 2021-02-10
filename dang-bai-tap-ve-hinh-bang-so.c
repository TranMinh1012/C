#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int tam;
	for( i = 1; i <= n; i++){
		tam = n;
		for( j = 1; j <= n; j++){
			if ( i == 1){
				printf("%d ", tam);
			}
			if( i != 1){
				if( j == 1){
					printf("%d ", tam--);
				} else if ( j != 1 && j < i){
					printf("%d ", tam--);
				} else {
					printf("%d ", tam);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
