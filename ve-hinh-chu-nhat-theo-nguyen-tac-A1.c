#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	int tam;
	if( a == b){
	for( i = 1; i <= a; i++){
		tam = a;
		for( j = 1; j <= b; j++){
			if ( i == 1){
				printf("%d", tam);
			}
			if( i != 1){
				if( j == 1){
					printf("%d", tam--);
				} else if ( j != 1 && j < i){
					printf("%d", tam--);
				} else {
					printf("%d", tam);
				}
			}
		}
		printf("\n");
	}
}
	if( a < b){
		for( i = 1; i <= a; i++){
			tam = b;
			for( j = 1; j <= b; j++){
				if( i == 1){
					printf("%d", tam);
				}
				if( i != 1){
					if( j == 1){
						printf("%d", tam--);
					} else if( j != 1 && j < i){
						printf("%d", tam--);
					} else {
						printf("%d", tam);
					}
				}
			}
			printf("\n");
		}	
	}
	if ( a > b){
		for( i = 1; i <= a; i++){
			tam = a;
			for( j = 1; j <= b; j++){
				if( i == 1){
					printf("%d", tam);
				}
				if( i != 1){
					if( j == 1){
						printf("%d", tam--);
					} else if( j != 1 && j < i){
						printf("%d", tam--);
					} else {
						printf("%d", tam);
					}
				}
			}
			printf("\n");
		}	
	}
	return 0;
}
