#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	for(i = 2; i <= n; i++){
		for( j = 1; j <= n-i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
