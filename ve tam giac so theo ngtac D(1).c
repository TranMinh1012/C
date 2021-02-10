#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k = n;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("%d", k+j-1);
		}
		printf("\n");
		k--;
	}
	return 0;
}
