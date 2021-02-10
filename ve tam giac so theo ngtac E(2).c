#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j, k;
	for( i = 1; i <= n; i++){
		k = n-i+1;
		for( j = 1; j <= n-i+1; j++){
			printf("%d", k++);
		}
		printf("\n");
	}
	return 0;
}
