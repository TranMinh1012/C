#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k = 0;
	for( i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			k++;
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}
