#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k = 1;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= n-i+1; j++){
			printf("%d", k+j-1);
		}
		printf("\n");
		k++;
	}
	return 0;
}
