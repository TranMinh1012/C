#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k;
	for( i = 0; i < n; i++){
		k = 1;
		for( j = 1; j <= n-i; j++){
			printf("%d", k++);
		}
		printf("\n");
	}
	return 0;
}
