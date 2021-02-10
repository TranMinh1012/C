#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for ( i = 1; i <= n; i++){
		for ( j = 1; j <= n; j++){
			if ( j <= i - 1){
				printf("~");
			} else if ( i == 1 || j == n || i == j){
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
