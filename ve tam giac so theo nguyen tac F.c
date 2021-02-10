#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for( i = 1; i <= n; i++){
		int k = 0;
		for( j = 1; j <= 2*i - 1; j++){
			k++;
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}
