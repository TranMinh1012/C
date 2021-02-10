#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int k = 64+n-1;
	int l = 64+n-1;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= n-i+1; j++){
			printf("%c", k);
			k += 1;
		}
		printf("\n");
		l -= 1;
		k = l;
	}
	return 0;
}
