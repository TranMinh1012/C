#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for ( i = 1; i <= n; i++){
		for ( j = 1; j <= n; j++){
			if ( j <= ( n-i ) ){
				printf("~");
			} else if ( i == n || j == n || i == n - j + 1){
				printf("*");
			} else {
				printf(".");
			}
				
		}
		printf("\n");
	}
	return 0;
}
