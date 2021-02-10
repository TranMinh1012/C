#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for ( i = 1; i <= n; i++){
		for ( j = n; j >= i; j--){
			if ( j == n || i == 1 ||  i == j ){
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
