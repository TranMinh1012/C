#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for ( i = 1; i <= a; i++){
		for ( j = 1; j <= b; j++){
			if ( j % 2 == 0){
				printf("1");
			} else {
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
