#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j, k;
	for( i = 1; i <= n; i++){
		k = i;
		for( j = 1; j <= i; j++){
			printf("%d", k++);
		}
		printf("\n");
	}
	return 0;
}
