#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k;
	for( i = 1; i <= n; i++){
		if( i % 2 == 1){
			k = 1;
			for( j = 1; j <= i; j++){
			printf("%d", k++);
		}
		} else {
			k = i;
			for( j = 1; j <= i; j++){
				printf("%d", k--);
			}
		}
		printf("\n");
	}
	return 0;
}
