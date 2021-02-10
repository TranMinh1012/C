#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k = 1;
	int l = 1;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("%d ", k);
			k += l;
			l += 1;
		}
		printf("\n");
	}
	return 0;
}
