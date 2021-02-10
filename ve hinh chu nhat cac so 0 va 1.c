#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for ( i = 1; i <= a; i++){
		if ( i % 2 == 0){
			for ( j = 1; j <= b; ++j){
				printf("0");
			}
		} else {
			for ( j = 1; j <= b; ++j){
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
